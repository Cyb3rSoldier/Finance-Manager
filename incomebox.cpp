#include "incomebox.h"
#include "ui_incomebox.h"
#include "mainwindow.h"

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

