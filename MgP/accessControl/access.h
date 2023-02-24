#ifndef ACCESS_H
#define ACCESS_H
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QtSql>
#include <iostream>
#include <QDebug>
#include <string>
#include <fstream>
#include <QSqlRecord>
#include "crypting/crypting.h"
#include <QDialog>
#include "mainwindow/mainwindow.h"

using namespace std;

class control {
public:
    void DataInsert ( QString name, QString pswd, QString where, QString key){
        QSqlQuery query;
        QString InsertUsersInfo = "INSERT INTO users VALUES ( '"+QString(name) +"' , '" +QString (pswd)+"' , '"+QString(where) + "' ,  '" +  QString (key) + "'  )";
        qDebug() << InsertUsersInfo;
        if(query.exec(QString(InsertUsersInfo))){
            qDebug() << "Data insert";

        }
        else qDebug() << "Data not insert" << query.lastError();
    }

    void connectDB (QSqlDatabase db){
        db = QSqlDatabase::addDatabase("QSQLITE");
        QString BaseName = "./allUsers.db";
        db.setDatabaseName(BaseName);

        if(db.open()) {
            qDebug() << "open";
        }
        else{
            qDebug() << "DataBase not open" << db.lastError();
        }
    }


    void GetDataFromDB( QString loginSTR,  QString passwordSTR, QString keySTR ){
        QSqlQuery query;
        Crypter person;
        QString loginFile, passwdFile;
        qDebug() << loginSTR;
        if(query.exec("SELECT * FROM users ")){
            qDebug() << "name find";
            QSqlRecord rec = query.record();
            while (query.next())
            {
                passwdFile = query.value(rec.indexOf("passwd")).toString();
                loginFile = query.value(rec.indexOf("name")).toString();
                keySTR = query.value(rec.indexOf("key")).toString();
                //qDebug() << passwordSTR << loginSTR << keySTR;
                if(loginSTR == loginFile){
                    keySTR = person.decryptString(keySTR, passwordSTR);
                    qDebug() << keySTR;
                    passwdFile = person.decryptString(passwdFile, keySTR);

                    if(passwordSTR == passwdFile ){
                        qDebug() << passwordSTR << passwdFile;
                        QMainWindow *mainwindow;
                        mainwindow = new MainWindow;
                        mainwindow->show();
                    }
                }
            }
        }
    }




};



#endif // ACCESS_H
