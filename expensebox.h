#ifndef EXPENSEBOX_H
#define EXPENSEBOX_H

#include <QDialog>

namespace Ui {
class expenseBox;
}

class expenseBox : public QDialog
{
    Q_OBJECT

public:
    explicit expenseBox(QWidget *parent = nullptr);
    ~expenseBox();

private slots:
    void expenseAdd();              // Handles ADD button
    void on_pushButton3_clicked();  // BACK button
    void on_pushButton2_clicked(); //Clear button

signals:
    void getExpense(const QString &amount);  // Signal to MainWindow

private:
    Ui::expenseBox *ui;
};

#endif // EXPENSEBOX_H
