#include <QtCore>
#include <QtNetwork>
#include <iostream>
#include "httpget.h"

HttpGet::HttpGet(int newChannelID, QUrl newUrl,  int newUserID, QObject* parent):QObject(parent)
{
   connect(&http, SIGNAL(done(bool)), this, SLOT(httpDone(bool)));
   url = newUrl;
   channelID = newChannelID;
   userID = newUserID;
}
bool HttpGet::getFile( )
{
    if (!url.isValid()) {
        std::cerr << "Error: Invalid URL" << std::endl;
        return false;
    }

    if (url.scheme() != "http") {
        std::cerr << "Error: URL must start with 'http:'" << std::endl;
        return false;
    }

    if (url.path().isEmpty()) {
        std::cerr << "Error: URL has no path" << std::endl;
        return false;
    }

    QString localFileName = QFileInfo(url.path()).fileName();
    if (localFileName.isEmpty())
        localFileName = "httpget.out";

    file.setFileName(localFileName);
    if (!file.open(QIODevice::WriteOnly)) {
        std::cerr << "Error: Cannot write file "
                  << qPrintable(file.fileName()) << ": "
                  << qPrintable(file.errorString()) << std::endl;
        return false;
    }
    nameOfFile = localFileName;
    http.setHost(url.host(), url.port(80));
    http.get(url.path(), &file);
    http.close();
    return true;
}

void HttpGet::httpDone(bool error)
{

    if (error) {
        std::cerr << "Error: " << qPrintable(http.errorString())
                  << std::endl;
    } else {
        std::cerr << "File downloaded as "
                  << qPrintable(file.fileName()) << std::endl;
    }

    file.close();

    DomParser parser;
    parser.readFile(nameOfFile,channelID);
    emit done();
    delete this;
}


