#ifndef PARSEXML_H
#define PARSEXML_H
#include <QHttp>
#include <QBuffer>
#include <QXmlStreamReader>
#include <QUrl>
#include "item.h"
class ParseXml : public QObject
{
    Q_OBJECT
public:
    ParseXml(int newChannelID, QUrl newUrl, QObject* parent = 0);
    void fetch();
    void setChannelID(int newChannelID);
    void setUrl(QUrl newUrl);

public slots:
     void finished(int id, bool error);
     void readData(const QHttpResponseHeader &);
     void timeout();

signals:
     void isRefreshDone(bool);
private:
     void parseXml();
     QXmlStreamReader xml;
     QString currentTag;
     QString title;
     QString link;
     QString description;
     QString author;
     QString pubdate;
    QTimer *t;

     QHttp http;
     int connectionId;

     int channelID;
     QUrl url;
};

#endif // PARSEXML_H
