#ifndef INFODIALOG_H
#define INFODIALOG_H
#include <QDialog>
#include<QAbstractButton>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = nullptr);
    ~InfoDialog();


private slots:
    void on_ok_clicked();

    void on_saveall_clicked();

    void on_save_clicked();

    void on_open_clicked();

    void on_no_clicked();

    void on_notoall_clicked();

    void on_cancel_clicked();

private:
    Ui::InfoDialog *ui;
};
#endif // INFODIALOG_H
