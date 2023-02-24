/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *background_label;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *name_label;
    QLineEdit *name_lineEdit;
    QLabel *passwd_label;
    QLineEdit *passwd_lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *go_Button;
    QPushButton *create_Button;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(800, 600);
        login->setMinimumSize(QSize(800, 600));
        login->setMaximumSize(QSize(800, 600));
        background_label = new QLabel(login);
        background_label->setObjectName(QString::fromUtf8("background_label"));
        background_label->setGeometry(QRect(-20, -150, 1080, 864));
        background_label->setFrameShape(QFrame::NoFrame);
        background_label->setFrameShadow(QFrame::Plain);
        background_label->setPixmap(QPixmap(QString::fromUtf8("../img/bbb111.jpg")));
        background_label->setWordWrap(false);
        background_label->setMargin(0);
        widget = new QWidget(login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 180, 541, 211));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 40, 0, 0);
        name_label = new QLabel(widget);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setMinimumSize(QSize(100, 40));
        name_label->setStyleSheet(QString::fromUtf8("background-color: rgba(3, 105, 214,0.7);\n"
"\n"
"font: 400 11pt \"Yu Gothic UI Light\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, name_label);

        name_lineEdit = new QLineEdit(widget);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));
        name_lineEdit->setMinimumSize(QSize(0, 40));
        name_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #ec5b68;\n"
" background-color: rgba(19,9,10, 0.6); ;\n"
"font: 700 9pt \"Segoe Print\";\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name_lineEdit);

        passwd_label = new QLabel(widget);
        passwd_label->setObjectName(QString::fromUtf8("passwd_label"));
        passwd_label->setMinimumSize(QSize(100, 40));
        passwd_label->setStyleSheet(QString::fromUtf8("background-color: rgba(3, 105, 214,0.7);\n"
"\n"
"font: 400 11pt \"Yu Gothic UI Light\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwd_label);

        passwd_lineEdit = new QLineEdit(widget);
        passwd_lineEdit->setObjectName(QString::fromUtf8("passwd_lineEdit"));
        passwd_lineEdit->setMinimumSize(QSize(0, 40));
        passwd_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #d55a2c;\n"
" background-color: rgba(19,9,10, 0.6); ;\n"
"font: 700 9pt \"Segoe Print\";\n"
"color: rgb(255, 255, 255);"));
        passwd_lineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwd_lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        go_Button = new QPushButton(widget);
        go_Button->setObjectName(QString::fromUtf8("go_Button"));
        go_Button->setMinimumSize(QSize(50, 35));
        go_Button->setStyleSheet(QString::fromUtf8("background-color:rgba(163,84,143, 0.8);\n"
"color: #f3f2f8;\n"
"border-radius:8px;\n"
"font: 400 11pt \"Yu Gothic UI Light\";"));

        horizontalLayout->addWidget(go_Button);

        create_Button = new QPushButton(widget);
        create_Button->setObjectName(QString::fromUtf8("create_Button"));
        create_Button->setMinimumSize(QSize(50, 35));
        create_Button->setStyleSheet(QString::fromUtf8("background-color:rgba(177,96,105, 0.8);\n"
"color: #f3f2f8;\n"
"border-radius:8px;\n"
"font: 400 11pt \"Yu Gothic UI Light\";"));

        horizontalLayout->addWidget(create_Button);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        background_label->setText(QString());
        name_label->setText(QCoreApplication::translate("login", "      \320\270\320\274\321\217:", nullptr));
        name_lineEdit->setText(QString());
        passwd_label->setText(QCoreApplication::translate("login", "    \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        passwd_lineEdit->setText(QString());
        go_Button->setText(QCoreApplication::translate("login", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        create_Button->setText(QCoreApplication::translate("login", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
