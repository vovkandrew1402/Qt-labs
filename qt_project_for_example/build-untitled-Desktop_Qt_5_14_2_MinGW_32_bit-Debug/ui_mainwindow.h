/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "msgbox.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QComboBox *CB_SEX;
    QComboBox *CB_YEAR;
    QLabel *label_sex;
    QLabel *label_year;
    QLineEdit *lineEdit_Name;
    QComboBox *CB_TYPE;
    QLabel *label;
    MsgBox *message;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(437, 379);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 20, 120, 23));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 80, 250, 20));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 110, 410, 170));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 120, 23));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 50, 250, 23));
        CB_SEX = new QComboBox(centralwidget);
        CB_SEX->addItem(QString());
        CB_SEX->addItem(QString());
        CB_SEX->setObjectName(QString::fromUtf8("CB_SEX"));
        CB_SEX->setGeometry(QRect(270, 20, 70, 22));
        CB_YEAR = new QComboBox(centralwidget);
        CB_YEAR->addItem(QString());
        CB_YEAR->addItem(QString());
        CB_YEAR->addItem(QString());
        CB_YEAR->addItem(QString());
        CB_YEAR->setObjectName(QString::fromUtf8("CB_YEAR"));
        CB_YEAR->setGeometry(QRect(350, 20, 70, 22));
        label_sex = new QLabel(centralwidget);
        label_sex->setObjectName(QString::fromUtf8("label_sex"));
        label_sex->setGeometry(QRect(270, 0, 50, 13));
        label_year = new QLabel(centralwidget);
        label_year->setObjectName(QString::fromUtf8("label_year"));
        label_year->setGeometry(QRect(350, 0, 50, 13));
        lineEdit_Name = new QLineEdit(centralwidget);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setGeometry(QRect(270, 80, 150, 20));
        CB_TYPE = new QComboBox(centralwidget);
        CB_TYPE->addItem(QString());
        CB_TYPE->addItem(QString());
        CB_TYPE->addItem(QString());
        CB_TYPE->addItem(QString());
        CB_TYPE->setObjectName(QString::fromUtf8("CB_TYPE"));
        CB_TYPE->setGeometry(QRect(300, 50, 120, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 55, 47, 13));
        message = new MsgBox(centralwidget);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(10, 289, 410, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 437, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(search()));

        CB_YEAR->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\270\320\274\320\265\320\275\320\270", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\277\320\270\321\210\320\270 \320\267\320\264\320\265\321\201\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264 \320\221\320\224", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        CB_SEX->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));
        CB_SEX->setItemText(1, QCoreApplication::translate("MainWindow", "1", nullptr));

        CB_SEX->setProperty("placeholderText", QVariant(QCoreApplication::translate("MainWindow", "Sex", nullptr)));
        CB_YEAR->setItemText(0, QCoreApplication::translate("MainWindow", "1970", nullptr));
        CB_YEAR->setItemText(1, QCoreApplication::translate("MainWindow", "1980", nullptr));
        CB_YEAR->setItemText(2, QCoreApplication::translate("MainWindow", "1990", nullptr));
        CB_YEAR->setItemText(3, QCoreApplication::translate("MainWindow", "2000", nullptr));

        CB_YEAR->setCurrentText(QCoreApplication::translate("MainWindow", "1970", nullptr));
        CB_YEAR->setProperty("placeholderText", QVariant(QCoreApplication::translate("MainWindow", "year", nullptr)));
        label_sex->setText(QCoreApplication::translate("MainWindow", "Sex", nullptr));
        label_year->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        lineEdit_Name->setPlaceholderText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        CB_TYPE->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\321\201\320\276\320\275\320\260", nullptr));
        CB_TYPE->setItemText(1, QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\321\203\320\264\320\275\320\270\320\272", nullptr));
        CB_TYPE->setItemText(2, QCoreApplication::translate("MainWindow", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202", nullptr));
        CB_TYPE->setItemText(3, QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
