#ifndef HTTPGET_H
#define HTTPGET_H

#include <QObject>
#include <QFile>
#include <QHttp>
#include <QString>
#include "domparser.h"
class QUrl;
class HttpGet : public QObject
{
    Q_OBJECT
public:
    //HttpGet(QUrl newUrl,QString newTitle,int newFolderID,int newUserID,QObject* parent = 0);
    HttpGet(int newChannelID, QUrl newUrl,  int newUserID, QObject* parent = 0);
    bool getFile();
    QString getNameOfFile(){return nameOfFile;}
signals:
    void done();

private slots:
    void httpDone(bool error);

private:
    QUrl url;
    int channelID;
    int userID;
    QHttp http;
    QFile file;
    QString nameOfFile;
};

#endif // HTTPGET_H
