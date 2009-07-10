#ifndef DOMPARSER_H
#define DOMPARSER_H
class QDomElement;
class QString;
#include "channel.h"
class DomParser
{
public:
    DomParser(){}
    bool readFile(QString thisFileName,int  newChannelID);
    QVector<Item> getItemVector();

private:
    void parseChannelElement(const QDomElement &element);
    void parseItemElement(const QDomElement &element);
    QVector<Item> v;
    int channelNum;
};
#endif
