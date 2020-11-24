#include "dijkstrawindow.h"
#include "ui_dijkstrawindow.h"

DijkstraWindow::DijkstraWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DijkstraWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    connect(ui->nextButton, SIGNAL(released()), this, SLOT(nextPressed()));


    graph = new Graph(8, 0.3f);
    graph->draw(scene);
}

DijkstraWindow::~DijkstraWindow()
{
    delete ui;
}

void DijkstraWindow::nextPressed() {
    graph->update();
    graph->draw(scene);
}
