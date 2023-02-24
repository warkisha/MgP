#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QDir>
#include <QFileDialog>
#include <iostream>
#include <QDebug>
#include <string>
#include <fstream>
#include "crypting/crypting.h"
#include "accessControl/access.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QtSql>
#include <QKeyEvent>

using namespace std;

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:


    void on_create_Button_clicked();



private:
    Ui::Form *ui;
    QDialog *dialogchoosefile;
    QSqlDatabase db;
};

#endif // FORM_H
