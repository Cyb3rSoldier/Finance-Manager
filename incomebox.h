#ifndef INCOMEBOX_H
#define INCOMEBOX_H

#include <QDialog>

namespace Ui {
class incomeBox;
}

class incomeBox : public QDialog
{
    Q_OBJECT
    signals:
    void getIncome(const QString &a);




public:
    explicit incomeBox(QWidget *parent = nullptr);
    ~incomeBox();

private slots:

    void on_pushButton3_clicked();

    void incomeAdd();

    void on_button3_clicked();

private:
    Ui::incomeBox *ui;
};

#endif // INCOMEBOX_H
