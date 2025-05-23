/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QLabel *label1;
    QPushButton *button2;
    QLabel *label2;
    QPushButton *button1;
    QPushButton *button3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(750, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label1 = new QLabel(centralwidget);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(130, 50, 531, 51));
        label1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(170, 0, 0);\n"
"	font: 28pt \"Impact\";\n"
"}"));
        label1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label1->setMargin(4);
        button2 = new QPushButton(centralwidget);
        button2->setObjectName("button2");
        button2->setGeometry(QRect(180, 260, 161, 24));
        button2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"Impact\";\n"
"	color: rgb(255, 220, 206);\n"
"	background-color: rgb(0, 85, 127);\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::HelpAbout));
        button2->setIcon(icon);
        label2 = new QLabel(centralwidget);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(170, 110, 451, 31));
        label2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 13pt \"Impact\";\n"
"    \n"
"	color: rgb(170, 0, 0);\n"
"}"));
        label2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        button1 = new QPushButton(centralwidget);
        button1->setObjectName("button1");
        button1->setGeometry(QRect(180, 200, 161, 24));
        button1->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"Impact\";\n"
"	color: rgb(255, 220, 206);\n"
"	background-color: rgb(0, 85, 127);\n"
"}"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ContactNew));
        button1->setIcon(icon1);
        button3 = new QPushButton(centralwidget);
        button3->setObjectName("button3");
        button3->setGeometry(QRect(180, 320, 161, 24));
        button3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"Impact\";\n"
"	color: rgb(255, 220, 206);\n"
"	background-color: rgb(0, 85, 127);\n"
"}"));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::SystemSearch));
        button3->setIcon(icon2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 750, 21));
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
        label1->setText(QCoreApplication::translate("MainWindow", "Personal Finance Manager", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "  Expense", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "Let's track your money in a SMART way. Work SMART , Be SMART !", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "  Income", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "  Current Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
