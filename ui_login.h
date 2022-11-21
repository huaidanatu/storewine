/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_4;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(568, 345);
        login->setStyleSheet(QStringLiteral(""));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 311, 41));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 120, 81, 21));
        QFont font;
        font.setPointSize(13);
        label_2->setFont(font);
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 170, 81, 21));
        label_3->setFont(font);
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 243, 171, 41));
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(232, 110, 181, 31));
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 170, 181, 31));
        label_4 = new QLabel(login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 300, 361, 41));
        label_5 = new QLabel(login);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(-180, -70, 1201, 441));
        label_5->setStyleSheet(QStringLiteral("background-image: url(:/login.jpg);"));
        pushButton_4 = new QPushButton(login);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 260, 112, 34));
        pushButton_4->raise();
        label_5->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_4->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", Q_NULLPTR));
        label->setText(QApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\345\255\230\345\217\226\351\205\222\347\263\273\347\273\237\347\231\273\345\275\225</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("login", "\347\231\273\345\275\225", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("login", "1", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("login", "1", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton_4->setText(QApplication::translate("login", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
