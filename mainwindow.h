#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "incomebox.h"
#include "expensebox.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button1_clicked(); // Open IncomeBox
    void on_button2_clicked(); // Open ExpenseBox
    void on_button3_clicked(); // Show balance

    void ongetIncome(const QString &amount); // Slot to handle income signal
    void ongetExpense(const QString &amount); // Slot to handle expense signal

    void on_closeButton_clicked();

private:
    Ui::MainWindow *ui;
    incomeBox *incomebox;
    expenseBox *expensebox;

    int total_income = 0;
    int total_expense = 0;

    int getBalance() const;
};
#endif // MAINWINDOW_H
