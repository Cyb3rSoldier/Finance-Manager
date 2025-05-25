#include "incomebox.h"
#include "ui_incomebox.h"
#include <QMessageBox>

incomeBox::incomeBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::incomeBox)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &incomeBox::incomeAdd); // ADD button
}

incomeBox::~incomeBox()
{
    delete ui;
}

void incomeBox::incomeAdd()
{
    QString amount = ui->lineEdit->text().trimmed();

    if (amount.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please enter an amount.");
        return;
    }

    bool ok;
    int value = amount.toInt(&ok);
    if (!ok || value <= 0) {
        QMessageBox::warning(this, "Warning", "Please enter a valid positive number.");
        return;
    }

    emit getIncome(amount); // Signal sent to MainWindow
    QMessageBox::information(this, "Success", "Income of " + amount + " added successfully!");

    ui->lineEdit->clear();
}

void incomeBox::on_pushButton3_clicked()
{
    this->hide();                    // Hide this dialog
    this->parentWidget()->show();   // Show MainWindow (the parent)
}

void incomeBox::on_button3_clicked()
{
    QMessageBox::information(this, "Balance", "Your balance is visible in the main window.");
}


void incomeBox::on_pushButton2_clicked()
{
    ui->lineEdit->clear();
}

