#include "checktherss.h"

CheckTheRss::CheckTheRss(QUrl newUrl, QObject* parent):QObject(parent)
{
    errorflag = true;
    url = newUrl;
    connect(&http, SIGNAL(readyRead(const QHttpResponseHeader &)),
              this, SLOT(readData(const QHttpResponseHeader &)));

     connect(&http, SIGNAL(requestFinished(int, bool)),
              this, SLOT(finished(int, bool)));
}

void CheckTheRss::fetch()
{
    xml.clear();
     http.setHost(url.host());
     connectionId = http.get(url.path());
}

void CheckTheRss::readData(const QHttpResponseHeader &resp)
 {
     if (resp.statusCode() != 200)
    {
         http.abort();
         sendError(1);
     }
     else {
         xml.addData(http.readAll());
         parseXml();
     }
 }

void CheckTheRss::finished(int id, bool error)
 {
     if (error) {
         sendError(2);
     }
 }

void CheckTheRss::parseXml()
 {
     while (!xml.atEnd()) {
         xml.readNext();
         if (xml.isStartElement() && xml.name() == "rss")
         {
             //if (xml.name() == "rss")
             break;
         }
     }
     if (xml.error() && xml.error() != QXmlStreamReader::PrematureEndOfDocumentError)
     {
         qWarning() << "XML ERROR:" << xml.lineNumber() << ": " << xml.errorString();
         http.abort();
         sendError(3);
     }
     else
     {
         QMessageBox::about(0, "Check", "It is a valid RSS");
         emit this->isCheckRssSuccess(true);
     }
 }

void CheckTheRss::sendError(int error)
{
    if(errorflag)
    {
        errorflag = false;
        if(error == 1)
            QMessageBox::warning(0,"Add Channel", "Http Response Error");
        else if(error == 2)
            QMessageBox::warning(0,"Add Channel", "Http Fetch Error");
        else if(error == 3)
            QMessageBox::warning(0,"Add Channel", "XML Error");

        emit this->isCheckRssSuccess(false);
    }
}
