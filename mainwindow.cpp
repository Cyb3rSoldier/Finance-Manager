#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , incomebox(new incomeBox(this))
    , expensebox(new expenseBox(this))
{
    ui->setupUi(this);

    connect(incomebox, &incomeBox::getIncome, this, &MainWindow::ongetIncome);
    connect(expensebox, &expenseBox::getExpense, this, &MainWindow::ongetExpense);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete incomebox;
    delete expensebox;
}

// Button1 - Open IncomeBox
void MainWindow::on_button1_clicked()
{
    this->hide();
    incomebox->show();
}

// Button2 - Open ExpenseBox
void MainWindow::on_button2_clicked()
{
    this->hide();
    expensebox->show();
}

// Button3 - Show balance
void MainWindow::on_button3_clicked()
{
    int balance = getBalance();
    QMessageBox::information(this, "Balance", "Your balance is: " + QString::number(balance));
}

// Handle income from dialog
void MainWindow::ongetIncome(const QString &amount)
{
    total_income += amount.toInt();
}

// Handle expense from dialog
void MainWindow::ongetExpense(const QString &amount)
{
    total_expense += amount.toInt();
}

// Calculate balance
int MainWindow::getBalance() const
{
    return total_income - total_expense;
}

//close button

void MainWindow::on_closeButton_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"Notification","Do you want to Quit?", QMessageBox:: Yes | QMessageBox:: No);
    if (reply == QMessageBox:: Yes)
    {
        close(); //close the window
    }
}
