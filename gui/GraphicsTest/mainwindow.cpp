#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "DijkstraUtil.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    Graph g(8);
    g.draw(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

