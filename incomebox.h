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

    void on_pushButton3_clicked();

    void on_pushButton_clicked();

    void on_button3_clicked();

private:
    Ui::incomeBox *ui;
};

#endif // INCOMEBOX_H
