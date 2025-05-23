#include "incomebox.h"
#include "ui_incomebox.h"
#include "mainwindow.h"
#include <QMessageBox> //for messages

incomeBox::incomeBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::incomeBox)
{
    ui->setupUi(this);
}

incomeBox::~incomeBox()
{
    delete ui;
}





void incomeBox::on_pushButton3_clicked()
{
    this->hide();              // hide incomeBox
    this->parentWidget()->show(); // show MainWindow again
}


void incomeBox::on_pushButton_clicked()
{
    QMessageBox::information(this,"Notification","Income Added Successful!");
}


void incomeBox::on_button3_clicked()
{
    QMessageBox::information(this,"Notification","Your Balance is: ");
}

