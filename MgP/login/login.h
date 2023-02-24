#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QPixmap>
#include "create/form.h"
#include <fstream>
#include <iostream>

using namespace  std;

QT_BEGIN_NAMESPACE
namespace Ui {
class login; }
QT_END_NAMESPACE

class login : public QDialog
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_create_Button_clicked();

    void on_go_Button_clicked();

private:
    Ui::login *ui;
    Form * form ;
};
#endif // LOGIN_H
