#include "expensebox.h"
#include "ui_expensebox.h"
#include <QMessageBox>

expenseBox::expenseBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::expenseBox)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &expenseBox::expenseAdd); // ADD button
}

expenseBox::~expenseBox()
{
    delete ui;
}

void expenseBox::expenseAdd()
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

    emit getExpense(amount); // Signal to MainWindow
    QMessageBox::information(this, "Success", "Expense of " + amount + " added successfully!");

    ui->lineEdit->clear();
}

void expenseBox::on_pushButton3_clicked()
{
    this->hide();                   // Hide expenseBox
    this->parentWidget()->show();  // Show MainWindow
}

void expenseBox::on_button3_clicked()
{
    QMessageBox::information(this, "Balance", "Your balance is visible in the main window.");
}

void expenseBox::on_pushButton2_clicked()
{
    ui->lineEdit->clear();
}

