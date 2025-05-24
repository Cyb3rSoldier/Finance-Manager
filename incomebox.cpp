#include "incomebox.h"
#include "ui_incomebox.h"
#include "mainwindow.h"
#include <QMessageBox> //for messages

incomeBox::incomeBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::incomeBox)
{
    ui->setupUi(this);
    //connet incomeAdd (add button)
    connect(ui->pushButton,&QPushButton::clicked,this,&incomeBox::incomeAdd);
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


//add button

void incomeBox::incomeAdd()
{
    QMessageBox::information(this,"Notification","Income Added Successful!");

}

//balance button

void incomeBox::on_button3_clicked()
{
    QString amount = ui->lineEdit->text();
    emit getIncome(amount);


    QMessageBox::information(this,"Notification","Your Balance is: ");
}

