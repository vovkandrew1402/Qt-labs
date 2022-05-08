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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "figurepainter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    FigurePainter *drawPanel;
    QHBoxLayout *CircleLayout;
    QPushButton *drawCircleButton;
    QPushButton *drawTriangleButton;
    QPushButton *drawSquareButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(600, 608);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(600, 0));
        MainWindow->setMaximumSize(QSize(600, 1060));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMinimumSize(QSize(600, 0));
        centralwidget->setMaximumSize(QSize(600, 16777215));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        drawPanel = new FigurePainter(centralwidget);
        drawPanel->setObjectName(QString::fromUtf8("drawPanel"));
        sizePolicy.setHeightForWidth(drawPanel->sizePolicy().hasHeightForWidth());
        drawPanel->setSizePolicy(sizePolicy);
        drawPanel->setMinimumSize(QSize(600, 500));
        drawPanel->setMaximumSize(QSize(600, 500));

        verticalLayout->addWidget(drawPanel);

        CircleLayout = new QHBoxLayout();
        CircleLayout->setObjectName(QString::fromUtf8("CircleLayout"));
        drawCircleButton = new QPushButton(centralwidget);
        drawCircleButton->setObjectName(QString::fromUtf8("drawCircleButton"));

        CircleLayout->addWidget(drawCircleButton);

        drawTriangleButton = new QPushButton(centralwidget);
        drawTriangleButton->setObjectName(QString::fromUtf8("drawTriangleButton"));

        CircleLayout->addWidget(drawTriangleButton);

        drawSquareButton = new QPushButton(centralwidget);
        drawSquareButton->setObjectName(QString::fromUtf8("drawSquareButton"));

        CircleLayout->addWidget(drawSquareButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        CircleLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(CircleLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        drawCircleButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214 \320\232\321\200\321\203\320\263", nullptr));
        drawTriangleButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214 \321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        drawSquareButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214 \320\272\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
