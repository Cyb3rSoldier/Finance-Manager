#include "incomebox.h"
#include "ui_incomebox.h"

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




