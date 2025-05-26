#ifndef INCOMEBOX_H
#define INCOMEBOX_H

#include <QDialog>

namespace Ui {
class incomeBox;
}

class incomeBox : public QDialog
{
    Q_OBJECT

public:
    explicit incomeBox(QWidget *parent = nullptr);
    ~incomeBox();

private slots:
    void incomeAdd();               // Handles ADD button
    void on_pushButton3_clicked();  // BACK button
    void on_pushButton2_clicked(); //Clear button

signals:
    void getIncome(const QString &amount);  // Signal to MainWindow

private:
    Ui::incomeBox *ui;
};

#endif // INCOMEBOX_H
