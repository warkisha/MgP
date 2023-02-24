#include "form.h"
#include "ui_form.h"
using namespace std;


Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    QPixmap px1 ("./img/back.jpg");
    ui->background_label->setPixmap (px1);

}

Form::~Form()
{
    delete ui;
}

void Form::on_create_Button_clicked()
{
    Crypter Cry;
    QString name = ui->newName_lineEdit->text();
    QString password = ui->newPaswd_lineEdit->text();
    QString password2 = ui->newPaswd2_lineEdit->text();
    QString key = ui->key_lineEdit->text();
    QString crykey;
    QString crypas = Cry.cryptString(password, key);
    crykey = Cry.cryptString(key, password);


    qDebug() << crykey;
    QString where = QApplication::applicationDirPath() +"/users/" +QString(name);

    if(password == password2){
        QDir dir;
        dir.mkdir(where);
        QSqlDatabase db;
        control newPr;
        newPr.connectDB(db); // подключились к базе
        newPr.DataInsert(name, crypas, where, crykey); //кинули данные о пользователе в базу
        close();
    }
    else {
        ui->info_label->setText("Пароли не совпадают");
    }

}









