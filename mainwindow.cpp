#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>

#include "expensebox.h"
#include "incomebox.h"

#include <QMessageBox> //for messages


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , incomebox(new incomeBox(this))
{
    ui->setupUi(this);
    connect(incomebox,&incomeBox::getIncome,this,&MainWindow::ongetIncome);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete incomebox;
}

QStringList incomeList;
QStringList expenseList;
int balance = 0;

//task for close button

void MainWindow::on_closeButton_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"Notification","Do you want to Quit?", QMessageBox:: Yes | QMessageBox:: No);
    if (reply == QMessageBox:: Yes)
    {
        close(); //close the window
    }
}

//income button

void MainWindow::on_button1_clicked()
{
    hide(); // hide the current window
    incomebox = new incomeBox(this); // create the incomeBox instance
    incomebox->show(); // show the incomeBox window
}


void MainWindow::on_button2_clicked()
{
    hide(); //hide the current window
    expensebox = new expenseBox(this); //create the expenseBox instance
    expensebox->show(); //show the expenseBox window

}


void MainWindow::on_button3_clicked()
{
    QMessageBox::information(this,"Notification","Your Balance is: ");

}

void MainWindow::ongetIncome(const QString &a)
{

}

