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

    void on_pushButton3_clicked();

    void on_pushButton_clicked();

    void on_button3_clicked();

private:
    Ui::expenseBox *ui;
};

#endif // EXPENSEBOX_H
