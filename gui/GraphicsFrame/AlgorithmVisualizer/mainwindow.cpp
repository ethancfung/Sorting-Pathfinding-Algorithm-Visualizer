#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_visualizeButton_clicked()
{
    if (ui->dijkstra_radioButton->isChecked()) {
        DijkstraWindow display;
        display.setModal(true);
        display.exec();
    }
}

void MainWindow::on_algInfoButton_clicked()
{
    AlgDisplayWindow display;
    display.setModal(true);
    display.exec();
}
