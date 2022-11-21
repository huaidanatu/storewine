/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *saveuser_pushButton;
    QLineEdit *username;
    QLineEdit *phone;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *searchphone;
    QPushButton *searchuser_pushButton;
    QLabel *label_8;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *registsuccess;
    QPushButton *clear;
    QLabel *searname;
    QLabel *searphone;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QLabel *label_14;
    QLabel *label_15;
    QFrame *line_4;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *searchphone_2;
    QLineEdit *qunum;
    QLineEdit *searchphone_5;
    QLineEdit *cunnum;
    QPushButton *qu;
    QPushButton *cun;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *insertwine;
    QPushButton *insertwinebytton;
    QLabel *registsuccess_2;
    QLabel *label_27;
    QLabel *label_28;
    QFrame *line_5;
    QFrame *line_6;
    QPushButton *quit;
    QLabel *label_29;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1500, 800);
        Widget->setStyleSheet(QStringLiteral("background-image: url(:/index.jpg);"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(640, 0, 291, 71));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 90, 201, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 170, 211, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(14);
        label_3->setFont(font2);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 220, 231, 51));
        label_4->setFont(font2);
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(-30, -110, 1601, 991));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        saveuser_pushButton = new QPushButton(Widget);
        saveuser_pushButton->setObjectName(QStringLiteral("saveuser_pushButton"));
        saveuser_pushButton->setGeometry(QRect(130, 300, 93, 28));
        username = new QLineEdit(Widget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(280, 180, 161, 31));
        phone = new QLineEdit(Widget);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(280, 230, 161, 31));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(670, 90, 201, 51));
        label_6->setFont(font1);
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(540, 200, 231, 51));
        label_7->setFont(font2);
        searchphone = new QLineEdit(Widget);
        searchphone->setObjectName(QStringLiteral("searchphone"));
        searchphone->setGeometry(QRect(770, 210, 161, 31));
        searchuser_pushButton = new QPushButton(Widget);
        searchuser_pushButton->setObjectName(QStringLiteral("searchuser_pushButton"));
        searchuser_pushButton->setGeometry(QRect(690, 310, 93, 28));
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 400, 391, 51));
        label_8->setFont(font1);
        line = new QFrame(Widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 60, 1511, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(490, 70, 20, 741));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(Widget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(1010, 70, 20, 741));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(Widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 560, 291, 51));
        label_9->setFont(font1);
        label_10 = new QLabel(Widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(540, 360, 61, 51));
        label_10->setFont(font2);
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(520, 410, 81, 51));
        label_11->setFont(font2);
        label_12 = new QLabel(Widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(640, 460, 121, 51));
        label_12->setFont(font2);
        label_13 = new QLabel(Widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(800, 460, 121, 51));
        label_13->setFont(font2);
        registsuccess = new QLabel(Widget);
        registsuccess->setObjectName(QStringLiteral("registsuccess"));
        registsuccess->setGeometry(QRect(140, 340, 221, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(12);
        registsuccess->setFont(font4);
        clear = new QPushButton(Widget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(260, 300, 93, 28));
        searname = new QLabel(Widget);
        searname->setObjectName(QStringLiteral("searname"));
        searname->setGeometry(QRect(600, 360, 191, 41));
        searname->setFont(font2);
        searphone = new QLabel(Widget);
        searphone->setObjectName(QStringLiteral("searphone"));
        searphone->setGeometry(QRect(600, 420, 321, 31));
        searphone->setFont(font2);
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(620, 510, 131, 192));
        listWidget_2 = new QListWidget(Widget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(800, 510, 101, 192));
        label_14 = new QLabel(Widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(1230, 90, 201, 51));
        label_14->setFont(font1);
        label_15 = new QLabel(Widget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(1230, 410, 201, 51));
        label_15->setFont(font1);
        line_4 = new QFrame(Widget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(1020, 390, 531, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_16 = new QLabel(Widget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(1040, 160, 231, 51));
        label_16->setFont(font2);
        label_17 = new QLabel(Widget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(1040, 210, 231, 51));
        label_17->setFont(font2);
        label_18 = new QLabel(Widget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(1060, 260, 141, 51));
        label_18->setFont(font2);
        label_19 = new QLabel(Widget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(1040, 470, 231, 51));
        label_19->setFont(font2);
        label_20 = new QLabel(Widget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(1040, 520, 231, 51));
        label_20->setFont(font2);
        label_21 = new QLabel(Widget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(1060, 570, 141, 51));
        label_21->setFont(font2);
        searchphone_2 = new QLineEdit(Widget);
        searchphone_2->setObjectName(QStringLiteral("searchphone_2"));
        searchphone_2->setGeometry(QRect(1270, 170, 161, 31));
        qunum = new QLineEdit(Widget);
        qunum->setObjectName(QStringLiteral("qunum"));
        qunum->setGeometry(QRect(1210, 270, 161, 31));
        searchphone_5 = new QLineEdit(Widget);
        searchphone_5->setObjectName(QStringLiteral("searchphone_5"));
        searchphone_5->setGeometry(QRect(1270, 480, 161, 31));
        cunnum = new QLineEdit(Widget);
        cunnum->setObjectName(QStringLiteral("cunnum"));
        cunnum->setGeometry(QRect(1210, 580, 161, 31));
        qu = new QPushButton(Widget);
        qu->setObjectName(QStringLiteral("qu"));
        qu->setGeometry(QRect(1060, 320, 131, 28));
        cun = new QPushButton(Widget);
        cun->setObjectName(QStringLiteral("cun"));
        cun->setGeometry(QRect(1060, 640, 131, 28));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(1210, 530, 101, 22));
        comboBox_2 = new QComboBox(Widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(1210, 220, 101, 22));
        label_22 = new QLabel(Widget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(1280, 10, 201, 51));
        label_22->setFont(font1);
        label_23 = new QLabel(Widget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(1370, 10, 141, 51));
        label_23->setFont(font2);
        label_24 = new QLabel(Widget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(1240, 320, 181, 41));
        label_24->setFont(font4);
        label_25 = new QLabel(Widget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(1230, 640, 181, 41));
        label_25->setFont(font4);
        label_26 = new QLabel(Widget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(30, 640, 231, 51));
        label_26->setFont(font2);
        insertwine = new QLineEdit(Widget);
        insertwine->setObjectName(QStringLiteral("insertwine"));
        insertwine->setGeometry(QRect(250, 650, 161, 31));
        insertwinebytton = new QPushButton(Widget);
        insertwinebytton->setObjectName(QStringLiteral("insertwinebytton"));
        insertwinebytton->setGeometry(QRect(190, 730, 93, 28));
        registsuccess_2 = new QLabel(Widget);
        registsuccess_2->setObjectName(QStringLiteral("registsuccess_2"));
        registsuccess_2->setGeometry(QRect(140, 690, 131, 31));
        registsuccess_2->setFont(font4);
        label_27 = new QLabel(Widget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(100, 470, 201, 51));
        label_27->setFont(font2);
        label_28 = new QLabel(Widget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(210, 470, 91, 51));
        label_28->setFont(font2);
        line_5 = new QFrame(Widget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(0, 540, 501, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(Widget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(0, 380, 501, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        quit = new QPushButton(Widget);
        quit->setObjectName(QStringLiteral("quit"));
        quit->setGeometry(QRect(1370, 770, 131, 28));
        label_29 = new QLabel(Widget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(670, 740, 181, 41));
        label_29->setFont(font4);
        label_5->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        saveuser_pushButton->raise();
        username->raise();
        phone->raise();
        label_6->raise();
        label_7->raise();
        searchphone->raise();
        searchuser_pushButton->raise();
        label_8->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        registsuccess->raise();
        clear->raise();
        searname->raise();
        searphone->raise();
        listWidget->raise();
        listWidget_2->raise();
        label_14->raise();
        label_15->raise();
        line_4->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();
        label_21->raise();
        searchphone_2->raise();
        qunum->raise();
        searchphone_5->raise();
        cunnum->raise();
        qu->raise();
        cun->raise();
        comboBox->raise();
        comboBox_2->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        label_25->raise();
        label_26->raise();
        insertwine->raise();
        insertwinebytton->raise();
        registsuccess_2->raise();
        label_27->raise();
        label_28->raise();
        line_5->raise();
        line_6->raise();
        quit->raise();
        label_29->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\255\230\345\217\226\351\205\222\347\263\273\347\273\237", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\351\205\222\346\260\264\345\255\230\345\217\226\347\263\273\347\273\237", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\345\255\230\351\205\222\345\256\242\346\210\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\345\255\230\351\205\222\345\256\242\346\210\267\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\345\255\230\351\205\222\345\256\242\346\210\267\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        label_5->setText(QString());
        saveuser_pushButton->setText(QApplication::translate("Widget", "\344\277\235\345\255\230", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\346\220\234\347\264\242\345\256\242\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\345\255\230\351\205\222\345\256\242\346\210\267\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        searchuser_pushButton->setText(QApplication::translate("Widget", "\346\220\234\347\264\242", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\345\255\230\351\205\222\345\256\242\346\210\267\346\200\273\346\225\260\351\207\217\357\274\210\344\272\272\357\274\211", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "\345\242\236\345\212\240\351\205\222\346\260\264\347\247\215\347\261\273", Q_NULLPTR));
        label_10->setText(QApplication::translate("Widget", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("Widget", "\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        label_12->setText(QApplication::translate("Widget", "\345\255\230\351\205\222\347\247\215\347\261\273", Q_NULLPTR));
        label_13->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\210\347\223\266\357\274\211", Q_NULLPTR));
        registsuccess->setText(QString());
        clear->setText(QApplication::translate("Widget", "\351\207\215\347\275\256", Q_NULLPTR));
        searname->setText(QString());
        searphone->setText(QString());
        label_14->setText(QApplication::translate("Widget", "\345\217\226\351\205\222", Q_NULLPTR));
        label_15->setText(QApplication::translate("Widget", "\345\255\230\351\205\222", Q_NULLPTR));
        label_16->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\345\217\226\351\205\222\345\256\242\346\210\267\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        label_17->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\351\205\222\346\260\264\347\247\215\347\261\273\357\274\232", Q_NULLPTR));
        label_18->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\345\217\226\345\207\240\347\223\266\357\274\232", Q_NULLPTR));
        label_19->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\345\255\230\351\205\222\345\256\242\346\210\267\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        label_20->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\351\205\222\346\260\264\347\247\215\347\261\273\357\274\232", Q_NULLPTR));
        label_21->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\345\255\230\345\207\240\347\223\266\357\274\232", Q_NULLPTR));
        qu->setText(QApplication::translate("Widget", "\345\217\226", Q_NULLPTR));
        cun->setText(QApplication::translate("Widget", "\345\255\230", Q_NULLPTR));
        label_22->setText(QApplication::translate("Widget", "\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        label_23->setText(QApplication::translate("Widget", "\345\267\262\350\277\236\346\216\245", Q_NULLPTR));
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\346\226\260\345\242\236\351\205\222\346\260\264\347\247\215\347\261\273\357\274\232", Q_NULLPTR));
        insertwinebytton->setText(QApplication::translate("Widget", "\345\242\236\345\212\240", Q_NULLPTR));
        registsuccess_2->setText(QString());
        label_27->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        label_28->setText(QString());
        quit->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        label_29->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
