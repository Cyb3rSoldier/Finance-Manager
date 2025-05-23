/********************************************************************************
** Form generated from reading UI file 'expensebox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSEBOX_H
#define UI_EXPENSEBOX_H

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

class Ui_expenseBox
{
public:
    QPushButton *pushButton2;
    QLabel *label2;
    QLabel *label3_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label1;
    QPushButton *pushButton3;
    QComboBox *comboBox;
    QLabel *label3;
    QDateEdit *date1;
    QPushButton *button3;

    void setupUi(QDialog *expenseBox)
    {
        if (expenseBox->objectName().isEmpty())
            expenseBox->setObjectName("expenseBox");
        expenseBox->resize(750, 500);
        pushButton2 = new QPushButton(expenseBox);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setGeometry(QRect(240, 440, 80, 24));
        pushButton2->setStyleSheet(QString::fromUtf8("font: 12pt \"Impact\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 0, 0);"));
        label2 = new QLabel(expenseBox);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(40, 120, 111, 31));
        label2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Impact\";"));
        label2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label3_2 = new QLabel(expenseBox);
        label3_2->setObjectName("label3_2");
        label3_2->setGeometry(QRect(40, 290, 111, 31));
        label3_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Impact\";"));
        label3_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lineEdit = new QLineEdit(expenseBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(200, 290, 161, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Impact\";\n"
"background-color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(expenseBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 440, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Impact\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 0, 0);"));
        label1 = new QLabel(expenseBox);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(210, 20, 351, 51));
        label1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(170, 0, 0);\n"
"	font: 28pt \"Impact\";\n"
"}"));
        label1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label1->setWordWrap(true);
        label1->setMargin(0);
        pushButton3 = new QPushButton(expenseBox);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setGeometry(QRect(640, 440, 80, 24));
        pushButton3->setStyleSheet(QString::fromUtf8("font: 12pt \"Impact\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 0, 0);"));
        comboBox = new QComboBox(expenseBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(200, 120, 161, 31));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Impact\";\n"
"background-color: rgb(0, 85, 127);"));
        label3 = new QLabel(expenseBox);
        label3->setObjectName("label3");
        label3->setGeometry(QRect(40, 200, 111, 31));
        label3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Impact\";"));
        label3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        date1 = new QDateEdit(expenseBox);
        date1->setObjectName("date1");
        date1->setGeometry(QRect(200, 200, 161, 31));
        date1->setStyleSheet(QString::fromUtf8("font: 12pt \"Impact\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 85, 127);"));
        button3 = new QPushButton(expenseBox);
        button3->setObjectName("button3");
        button3->setGeometry(QRect(390, 440, 161, 24));
        button3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"Impact\";\n"
"	color: rgb(255, 220, 206);\n"
"	background-color: rgb(0, 85, 127);\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::SystemSearch));
        button3->setIcon(icon);

        retranslateUi(expenseBox);

        QMetaObject::connectSlotsByName(expenseBox);
    } // setupUi

    void retranslateUi(QDialog *expenseBox)
    {
        expenseBox->setWindowTitle(QCoreApplication::translate("expenseBox", "Dialog", nullptr));
        pushButton2->setText(QCoreApplication::translate("expenseBox", "CLEAR", nullptr));
        label2->setText(QCoreApplication::translate("expenseBox", "Expense Type:", nullptr));
        label3_2->setText(QCoreApplication::translate("expenseBox", "Amount:", nullptr));
        pushButton->setText(QCoreApplication::translate("expenseBox", "ADD", nullptr));
        label1->setText(QCoreApplication::translate("expenseBox", "your  Expenses", nullptr));
        pushButton3->setText(QCoreApplication::translate("expenseBox", "BACK", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("expenseBox", "Rent", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("expenseBox", "Groceries", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("expenseBox", "Transportation", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("expenseBox", "Tuition Fees", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("expenseBox", "Clothing", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("expenseBox", "Gym ", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("expenseBox", "Healthcare ", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("expenseBox", "Internet", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("expenseBox", "Phone Bill", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("expenseBox", "Travel", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("expenseBox", "Others", nullptr));

        label3->setText(QCoreApplication::translate("expenseBox", "Date:", nullptr));
        button3->setText(QCoreApplication::translate("expenseBox", "  Current Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class expenseBox: public Ui_expenseBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSEBOX_H
