#include <QtGui>
#include <QtXml>
#include <iostream>
#include "domparser.h"

bool DomParser::readFile(QString thisFileName,int newChannelID)
{
    QFile file(thisFileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        std::cerr << "Error: Cannot read file " << qPrintable(thisFileName)
                  << ": " << qPrintable(file.errorString())
                  << std::endl;
        return false;
    }

    QString errorStr;
    int errorLine;
    int errorColumn;

    QDomDocument doc;
    if (!doc.setContent(&file, false, &errorStr, &errorLine,
                        &errorColumn)) {
        std::cerr << "Error: Parse error at line " << errorLine << ", "
                  << "column " << errorColumn << ": "
                  << qPrintable(errorStr) << std::endl;
        return false;
    }

    QDomElement root = doc.documentElement();
    if (root.tagName() != "rss") {
        std::cerr << "Error: Not a rss file" << std::endl;
        return false;
    }
    if(root.firstChild().toElement().tagName() != "channel")
    {
        std::cerr << "Error: Not a rss file" << std::endl;
        return false;
    }

    channelNum = newChannelID;
    parseChannelElement(root.firstChild().toElement());
    return true;
}

void DomParser::parseChannelElement(const QDomElement &element)
{
    QDomNode child = element.firstChild();
    while (!child.isNull()) {
        if (child.toElement().tagName() == "item")
            parseItemElement(child.toElement());
        child = child.nextSibling();
    }
}

void DomParser::parseItemElement(const QDomElement &element)
{
    QDomNode child = element.firstChild();
    QString title;
    QString link;
    QString description;
    QString author;
    QDate pubdate;
    while (!child.isNull()) {
        if (child.toElement().tagName() == "title") {
            title = child.toElement().text();
        }
        else if(child.toElement().tagName() == "link"){
            link = child.toElement().text();
        }
        else if(child.toElement().tagName() == "description"){
            QStringList list = child.toElement().text().split("<");
            QString str1 = list.at(0);
            description = str1.replace(" ","");
        }
        else if(child.toElement().tagName() == "author"){
            author =  child.toElement().text();
        }
        else if(child.toElement().tagName() == "pubDate"){
            QStringList list = child.toElement().text().split(" ");
            QString str2 = list.at(2);
;
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
            pubdate = date;
        }
        child = child.nextSibling();
    }
    Item i(title, link, description, author, pubdate, 0,channelNum);
    Item::insertItem(i);
    v.append(i);
}

QVector<Item> DomParser::getItemVector()
{
    return v;
}
