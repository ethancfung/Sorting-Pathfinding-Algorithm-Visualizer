#include "algdisplaywindow.h"
#include "ui_algdisplaywindow.h"

AlgDisplayWindow::AlgDisplayWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlgDisplayWindow)
{
    ui->setupUi(this);
}

AlgDisplayWindow::~AlgDisplayWindow()
{
    delete ui;
}

