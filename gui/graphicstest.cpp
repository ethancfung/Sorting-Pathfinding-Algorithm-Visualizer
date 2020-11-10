#include "graphicstest.h"
#include "ui_graphicstest.h"

// simple graphics test

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QBrush magentaBrush(Qt::magenta);
    QBrush blueBrush(Qt::blue);
    QPen outlinePen(Qt::black);
    outlinePen.setWidth(2);

    rectangle = scene->addRect(-ui->graphicsView->width(), -ui->graphicsView->height(), 50, 50, outlinePen, blueBrush);
    ellipse = scene->addEllipse(-100, -200, 50, 50, outlinePen, magentaBrush);

    // addEllipse(x,y,w,h,pen,brush)
//    ellipse = scene->addEllipse(0, -100, 300, 60, outlinePen, greenBrush);

    text = scene->addText("TEAM PIZZA!", QFont("Arial", 20) );
    // movable text
    text->setFlag(QGraphicsItem::ItemIsMovable);
}

MainWindow::~MainWindow()
{
    delete ui;
}

