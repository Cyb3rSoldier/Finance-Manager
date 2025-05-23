#include "expensebox.h"
#include "ui_expensebox.h"
#include "mainwindow.h"

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

