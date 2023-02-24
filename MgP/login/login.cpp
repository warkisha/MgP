#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap px1 ("./img/back.jpg");
    ui->background_label->setPixmap (px1);
}

login::~login()
{
    delete ui;
}


void login::on_create_Button_clicked()
{
    form  = new Form;
    form->show();
}


void login::on_go_Button_clicked()
{
    control person;
    QSqlDatabase db;
    QString userName, userPaswd;
    userName = ui->name_lineEdit->text();
    userPaswd = ui->passwd_lineEdit->text();
    person.connectDB(db);
    QString key;
    qDebug() << userName;
    person.GetDataFromDB(userName, userPaswd, key);


}

