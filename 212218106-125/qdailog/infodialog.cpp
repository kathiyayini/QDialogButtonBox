#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent)
    , ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_pushButton_clicked()
{
    QString s=ui->lineEdit->text();
    position=s;
    if(ui->Windows->isChecked())
    {
        favos="Windows";
    }
    if(ui->Linux->isChecked())
    {
        favos="Linux";
    }
    if(ui->Mac->isChecked())
    {
        favos="Mac";
    }
    accept();

}
QString InfoDialog::getFavos() const
{
    return favos;
}
QString InfoDialog::getPosition() const
{
    return position;
}

void InfoDialog::on_pushButton_2_clicked()
{
    reject();
}
