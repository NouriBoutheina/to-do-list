/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *txt_Task;
    QPushButton *btn_Add;
    QPushButton *btn_rm;
    QPushButton *btn_rm_all;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(416, 489);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        txt_Task = new QLineEdit(centralwidget);
        txt_Task->setObjectName("txt_Task");
        txt_Task->setGeometry(QRect(30, 30, 261, 24));
        btn_Add = new QPushButton(centralwidget);
        btn_Add->setObjectName("btn_Add");
        btn_Add->setGeometry(QRect(300, 30, 80, 24));
        btn_rm = new QPushButton(centralwidget);
        btn_rm->setObjectName("btn_rm");
        btn_rm->setGeometry(QRect(210, 410, 80, 24));
        btn_rm_all = new QPushButton(centralwidget);
        btn_rm_all->setObjectName("btn_rm_all");
        btn_rm_all->setGeometry(QRect(300, 410, 80, 24));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(30, 80, 351, 321));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 416, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_Add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btn_rm->setText(QCoreApplication::translate("MainWindow", "Remove Item", nullptr));
        btn_rm_all->setText(QCoreApplication::translate("MainWindow", "Remove All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
