#include "parsexml.h"

ParseXml::ParseXml(int newChannelID, QUrl newUrl, QObject* parent):QObject(parent)
{
    channelID = newChannelID;
    url = newUrl;
    t = new QTimer();
    QObject::connect(&http, SIGNAL(readyRead(const QHttpResponseHeader &)),
              this, SLOT(readData(const QHttpResponseHeader &)));

    QObject::connect(&http, SIGNAL(requestFinished(int, bool)),
              this, SLOT(finished(int, bool)));
}

void ParseXml::fetch()
{
    xml.clear();
    t->start(60 * 1000);
    connect(t,SIGNAL(timeout()),this,SLOT(timeout()));
    http.setHost(url.host());
    connectionId = http.get(url.path());
}

void ParseXml::readData(const QHttpResponseHeader &resp)
 {
     if (resp.statusCode() != 200)
         http.abort();
     else {
         xml.addData(http.readAll());
         parseXml();
     }
 }

void ParseXml::finished(int id, bool error)
 {
     if (error)
     {
         qWarning("Received error during HTTP fetch.");
     }
 }

void ParseXml::parseXml()
 {
     while (!xml.atEnd())
    {
         xml.readNext();
         if (xml.isStartElement())
         {
             if (xml.name() == "item")
                 link = xml.attributes().value("rss:about").toString();
             currentTag = xml.name().toString();
         }
         else if (xml.isEndElement())
         {
             if (xml.name() == "item")
             {
                QStringList list = pubdate.split(" ");
                QString str2 = list.at(2);

                int day = list.at(1).toInt();
                int year = list.at(3).toInt();
                int month;
                if(str2 == "Jan")
                    month = 1;
                else if(str2 == "Feb")
                    month = 2;
                else if(str2 == "Mar")
                    month = 3;
                else if(str2 == "Apr")
                    month = 4;
                else if(str2 == "May")
                    month = 5;
                else if(str2 == "Jun")
                    month = 6;
                else if(str2 == "Jul")
                    month = 7;
                else if(str2 == "Aug")
                    month = 8;
                else if(str2 == "Sep")
                    month = 9;
                else if(str2 == "Oct")
                    month = 10;
                else if(str2 == "Nov")
                    month = 11;
                else if(str2 == "Dec")
                    month = 12;
                QDate date(year, month, day);
                Item itemObject(title, link,description, author,date,0,channelID);
                Item::insertItem(itemObject);
                title.clear();
                link.clear();
                description.clear();
                author.clear();
                pubdate.clear();
             }

         }
         else if (xml.isCharacters() && !xml.isWhitespace())
         {
             if (currentTag == "title")
                 title += xml.text().toString();
             else if (currentTag == "link")
                 link += xml.text().toString();
             else if(currentTag == "description")
                 description += xml.text().toString();
             else if(currentTag == "author")
                 author += xml.text().toString();
             else if(currentTag == "pubDate")
                 pubdate += xml.text().toString();
         }
     }
     if (xml.error() && xml.error() != QXmlStreamReader::PrematureEndOfDocumentError)
     {
         qWarning() << "XML ERROR:" << xml.lineNumber() << ": " << xml.errorString();
         http.abort();
         emit this->isRefreshDone(false);
         t->stop();
     }
     else
     {
         emit this->isRefreshDone(true);
         t->stop();
     }
 }

void ParseXml::setUrl(QUrl newUrl)
{
    url = newUrl;
}

void ParseXml::setChannelID(int newChannelID)
{
    channelID = newChannelID;
}

void ParseXml::timeout()
{
    http.abort();
    emit this->isRefreshDone(false);
}
