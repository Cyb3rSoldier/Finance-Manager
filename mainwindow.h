#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "incomebox.h" //header file for income section
#include "expensebox.h" //header file for expense section

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_closeButton_clicked();

    void on_button1_clicked();

    void on_button2_clicked();

private:
    Ui::MainWindow *ui;
    incomeBox *incomebox; //instance of incomeBox
    expenseBox *expensebox; //instance of expenseBox
};
#endif // MAINWINDOW_H
