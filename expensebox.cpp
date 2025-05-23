#include "expensebox.h"
#include "ui_expensebox.h"
#include "mainwindow.h"
#include <QMessageBox> //for messages

expenseBox::expenseBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::expenseBox)
{
    ui->setupUi(this);
}

expenseBox::~expenseBox()
{
    delete ui;
}




void expenseBox::on_pushButton3_clicked()
{
    this->hide();              // hide incomeBox
    this->parentWidget()->show(); // show MainWindow again
}




void expenseBox::on_pushButton_clicked()
{
    QMessageBox::information(this,"Notification","Expenses Added Successful!");

}


void expenseBox::on_button3_clicked()
{
    QMessageBox::information(this,"Notification","Your Balance is: ");
}

