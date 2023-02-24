/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *background_label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *newName_label;
    QLineEdit *newName_lineEdit;
    QLabel *newPswd_label;
    QLineEdit *newPaswd_lineEdit;
    QLabel *newPswd2_label;
    QLineEdit *newPaswd2_lineEdit;
    QLabel *key_label;
    QLineEdit *key_lineEdit;
    QLabel *info_label;
    QPushButton *create_Button;
    QPushButton *back_Button;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(800, 600);
        Form->setMinimumSize(QSize(800, 600));
        Form->setMaximumSize(QSize(800, 600));
        background_label = new QLabel(Form);
        background_label->setObjectName(QString::fromUtf8("background_label"));
        background_label->setGeometry(QRect(0, -210, 1040, 1080));
        background_label->setPixmap(QPixmap(QString::fromUtf8("../img/bbb111.jpg")));
        formLayoutWidget = new QWidget(Form);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 140, 491, 216));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        newName_label = new QLabel(formLayoutWidget);
        newName_label->setObjectName(QString::fromUtf8("newName_label"));
        newName_label->setMinimumSize(QSize(170, 40));
        newName_label->setStyleSheet(QString::fromUtf8("background-color: rgba(3, 105, 214,0.6);\n"
"\n"
"font: 400 11pt \"Yu Gothic UI Light\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, newName_label);

        newName_lineEdit = new QLineEdit(formLayoutWidget);
        newName_lineEdit->setObjectName(QString::fromUtf8("newName_lineEdit"));
        newName_lineEdit->setMinimumSize(QSize(200, 40));
        newName_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #ec5b68;\n"
" background-color: rgba(19,9,10, 0.6); ;\n"
"font: 700 9pt \"Segoe Print\";\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, newName_lineEdit);

        newPswd_label = new QLabel(formLayoutWidget);
        newPswd_label->setObjectName(QString::fromUtf8("newPswd_label"));
        newPswd_label->setMinimumSize(QSize(170, 40));
        newPswd_label->setStyleSheet(QString::fromUtf8("background-color: rgba(3, 105, 214,0.6);\n"
"\n"
"font: 400 11pt \"Yu Gothic UI Light\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, newPswd_label);

        newPaswd_lineEdit = new QLineEdit(formLayoutWidget);
        newPaswd_lineEdit->setObjectName(QString::fromUtf8("newPaswd_lineEdit"));
        newPaswd_lineEdit->setMinimumSize(QSize(0, 40));
        newPaswd_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #ec5b68;\n"
" background-color: rgba(19,9,10, 0.6); ;\n"
"font: 700 9pt \"Segoe Print\";\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, newPaswd_lineEdit);

        newPswd2_label = new QLabel(formLayoutWidget);
        newPswd2_label->setObjectName(QString::fromUtf8("newPswd2_label"));
        newPswd2_label->setMinimumSize(QSize(170, 40));
        newPswd2_label->setStyleSheet(QString::fromUtf8("background-color: rgba(3, 105, 214,0.6);\n"
"\n"
"font: 400 11pt \"Yu Gothic UI Light\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, newPswd2_label);

        newPaswd2_lineEdit = new QLineEdit(formLayoutWidget);
        newPaswd2_lineEdit->setObjectName(QString::fromUtf8("newPaswd2_lineEdit"));
        newPaswd2_lineEdit->setMinimumSize(QSize(0, 40));
        newPaswd2_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #ec5b68;\n"
" background-color: rgba(19,9,10, 0.6); ;\n"
"font: 700 9pt \"Segoe Print\";\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, newPaswd2_lineEdit);

        key_label = new QLabel(formLayoutWidget);
        key_label->setObjectName(QString::fromUtf8("key_label"));
        key_label->setMinimumSize(QSize(170, 40));
        key_label->setStyleSheet(QString::fromUtf8("background-color: rgba(3, 105, 214,0.6);\n"
"\n"
"font: 400 11pt \"Yu Gothic UI Light\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, key_label);

        key_lineEdit = new QLineEdit(formLayoutWidget);
        key_lineEdit->setObjectName(QString::fromUtf8("key_lineEdit"));
        key_lineEdit->setMinimumSize(QSize(0, 40));
        key_lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #ec5b68;\n"
" background-color: rgba(19,9,10, 0.6); ;\n"
"font: 700 9pt \"Segoe Print\";\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, key_lineEdit);

        info_label = new QLabel(formLayoutWidget);
        info_label->setObjectName(QString::fromUtf8("info_label"));
        info_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 9pt \"Segoe Print\";"));

        formLayout->setWidget(4, QFormLayout::FieldRole, info_label);

        create_Button = new QPushButton(Form);
        create_Button->setObjectName(QString::fromUtf8("create_Button"));
        create_Button->setGeometry(QRect(50, 360, 131, 111));
        create_Button->setStyleSheet(QString::fromUtf8("background-color:rgba(163,84,143, 0.8);\n"
"color: #f3f2f8;\n"
"\n"
"font: 400 11pt \"Yu Gothic UI Light\";\n"
" border-radius: 55px;"));
        back_Button = new QPushButton(Form);
        back_Button->setObjectName(QString::fromUtf8("back_Button"));
        back_Button->setGeometry(QRect(190, 440, 91, 81));
        back_Button->setStyleSheet(QString::fromUtf8("background-color:rgba(177,96,105, 0.8);\n"
"color: #f3f2f8;\n"
"\n"
"font: 400 11pt \"Yu Gothic UI Light\";\n"
" border-radius: 40px;"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        background_label->setText(QString());
        newName_label->setText(QCoreApplication::translate("Form", "          \320\230\320\274\321\217", nullptr));
        newPswd_label->setText(QCoreApplication::translate("Form", "          \320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        newPaswd_lineEdit->setText(QString());
        newPswd2_label->setText(QCoreApplication::translate("Form", "  \320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        key_label->setText(QCoreApplication::translate("Form", "  \320\241\320\265\320\272\321\200\320\265\321\202\320\275\320\260\321\217 \321\204\321\200\320\260\320\267\320\260", nullptr));
        info_label->setText(QString());
        create_Button->setText(QCoreApplication::translate("Form", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        back_Button->setText(QCoreApplication::translate("Form", "\320\276\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
