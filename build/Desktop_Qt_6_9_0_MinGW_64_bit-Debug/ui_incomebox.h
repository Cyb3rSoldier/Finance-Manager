/********************************************************************************
** Form generated from reading UI file 'incomebox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOMEBOX_H
#define UI_INCOMEBOX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_incomeBox
{
public:
    QLabel *label3_2;
    QPushButton *button3;
    QLineEdit *lineEdit;
    QLabel *incomebox;
    QPushButton *pushButton2;
    QDateEdit *date1;
    QLabel *label1;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton3;
    QLabel *label3;

    void setupUi(QDialog *incomeBox)
    {
        if (incomeBox->objectName().isEmpty())
            incomeBox->setObjectName("incomeBox");
        incomeBox->resize(750, 500);
        label3_2 = new QLabel(incomeBox);
        label3_2->setObjectName("label3_2");
        label3_2->setGeometry(QRect(50, 310, 111, 31));
        label3_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Impact\";"));
        label3_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        button3 = new QPushButton(incomeBox);
        button3->setObjectName("button3");
        button3->setGeometry(QRect(400, 430, 161, 24));
        button3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"Impact\";\n"
"	color: rgb(255, 220, 206);\n"
"	background-color: rgb(0, 85, 127);\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::SystemSearch));
        button3->setIcon(icon);
        lineEdit = new QLineEdit(incomeBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(200, 310, 161, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Impact\";\n"
"background-color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);"));
        incomebox = new QLabel(incomeBox);
        incomebox->setObjectName("incomebox");
        incomebox->setGeometry(QRect(50, 140, 111, 31));
        incomebox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Impact\";"));
        incomebox->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        pushButton2 = new QPushButton(incomeBox);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setGeometry(QRect(230, 400, 80, 24));
        pushButton2->setStyleSheet(QString::fromUtf8("font: 12pt \"Impact\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 0, 0);"));
        date1 = new QDateEdit(incomeBox);
        date1->setObjectName("date1");
        date1->setGeometry(QRect(200, 220, 161, 31));
        date1->setStyleSheet(QString::fromUtf8("font: 12pt \"Impact\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 85, 127);"));
        label1 = new QLabel(incomeBox);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(210, 40, 351, 51));
        label1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(170, 0, 0);\n"
"	font: 28pt \"Impact\";\n"
"}"));
        label1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label1->setWordWrap(true);
        label1->setMargin(0);
        pushButton = new QPushButton(incomeBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 400, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Impact\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 0, 0);"));
        comboBox = new QComboBox(incomeBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(200, 140, 161, 31));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Impact\";\n"
"background-color: rgb(0, 85, 127);"));
        pushButton3 = new QPushButton(incomeBox);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setGeometry(QRect(650, 430, 80, 24));
        pushButton3->setStyleSheet(QString::fromUtf8("font: 12pt \"Impact\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 0, 0);"));
        label3 = new QLabel(incomeBox);
        label3->setObjectName("label3");
        label3->setGeometry(QRect(50, 220, 111, 31));
        label3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Impact\";"));
        label3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(incomeBox);

        QMetaObject::connectSlotsByName(incomeBox);
    } // setupUi

    void retranslateUi(QDialog *incomeBox)
    {
        incomeBox->setWindowTitle(QCoreApplication::translate("incomeBox", "Dialog", nullptr));
        label3_2->setText(QCoreApplication::translate("incomeBox", "Amount:", nullptr));
        button3->setText(QCoreApplication::translate("incomeBox", "  Current Balance", nullptr));
        incomebox->setText(QCoreApplication::translate("incomeBox", "Income Type:", nullptr));
        pushButton2->setText(QCoreApplication::translate("incomeBox", "CLEAR", nullptr));
        label1->setText(QCoreApplication::translate("incomeBox", "Add your Income", nullptr));
        pushButton->setText(QCoreApplication::translate("incomeBox", "ADD", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("incomeBox", "Salary", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("incomeBox", "Savings", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("incomeBox", "Freelance ", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("incomeBox", "Commission", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("incomeBox", "Rental Income", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("incomeBox", "Gifts", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("incomeBox", "Others", nullptr));

        pushButton3->setText(QCoreApplication::translate("incomeBox", "BACK", nullptr));
        label3->setText(QCoreApplication::translate("incomeBox", "Date:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class incomeBox: public Ui_incomeBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOMEBOX_H
