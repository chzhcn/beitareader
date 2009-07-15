#ifndef CHECKTHERSS_H
#define CHECKTHERSS_H

#include <QObject>
#include <QUrl>
 #include <QHttp>
 #include <QBuffer>
 #include <QXmlStreamReader>
#include <QtCore>
#include <QMessageBox>
class CheckTheRss : public QObject
{
    Q_OBJECT;
public:
    CheckTheRss(QUrl newUrl, QObject* parent = 0);
    void fetch();
signals:
    void isCheckRssSuccess(bool);
public slots:
    void finished(int id, bool error);
    void readData(const QHttpResponseHeader &);
private:
    QUrl url;
    void parseXml();

     QXmlStreamReader xml;
     QString currentTag;
     QString title;
     QString link;

     QHttp http;
     int connectionId;

     bool errorflag;
     void sendError(int);
};

#endif // CHECKTHERSS_H
