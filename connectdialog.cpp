#include "connectdialog.h"
#include "ui_connectdialog.h"

connectDialog::connectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::connectDialog)
{
    ui->setupUi(this);
}

connectDialog::~connectDialog()
{
    delete ui;
}

QString connectDialog::getIp(){
    return ui->lineEdit->text();
}

int connectDialog::getPort(){
    return ui->port_Edit->text().toInt();
}
