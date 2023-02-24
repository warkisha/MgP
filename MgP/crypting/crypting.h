#ifndef CRYPTING_H
#define CRYPTING_H
#include "QKeyEvent"
#include "QSqlIndex"
#include "QString"
#include "QKeySequenceEdit"

class Crypter
{

public:
    static QString cryptString(QString toCrypt, QString kEncryptorString)
    {
        QString resultString = "";
        for ( int i = 0; i < toCrypt.length(); i++)
        {
            resultString.append(QString(QChar(toCrypt[i]).unicode()^QChar(kEncryptorString[keyIndex(i, kEncryptorString)]).unicode()));
        }
        return resultString;
    }
    static QString decryptString(QString toDecrypt, QString kEncryptorString)
    {
        QString resultString = "";
        for ( int i = 0; i < toDecrypt.length(); i++)
        {
            resultString.append(QString(QChar(toDecrypt[i]).unicode()^QChar(kEncryptorString[keyIndex(i,kEncryptorString)]).unicode()));
        }
        return resultString;
    }
private:

    static int keyIndex(int index, QString kEncryptorString)
    {
        int len = kEncryptorString.length();
        int multiple = index / len;
        if ( index >=  len ) {
            return index - (len * multiple);
        }
        return index;
    }
};



#endif // CRYPTING_H
