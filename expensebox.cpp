#include "expensebox.h"
#include "ui_expensebox.h"

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
