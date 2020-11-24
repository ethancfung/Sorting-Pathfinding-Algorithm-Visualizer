#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    connect(ui->nextButton, SIGNAL(released()), this, SLOT(nextPressed()));

    graph = new Graph(8);
    graph->draw(scene);
}

void MainWindow::nextPressed() {
    graph->update();
    graph->draw(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

