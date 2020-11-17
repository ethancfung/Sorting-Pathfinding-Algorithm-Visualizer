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

    QBrush greenBrush(Qt::green);
    QBrush blueBrush(Qt::blue);
    QPen outlinePen(Qt::black);
    outlinePen.setWidth(1);

    Graph g(6);
    for (int i = 0; i < (int)g.nodes.size(); ++i) {
        Node n = g.nodes[i];
        for (int j = 0; j < (int)n.adj_nodes.size(); ++j) {
            Node adj_node = g.nodes[n.adj_nodes[j]];
            scene->addLine(adj_node.x + 5, adj_node.y + 5, n.x + 5, n.y + 5, outlinePen);

            text = scene->addText(QString::number(n.adj_dist[j]), QFont("Arial", 8));
            bool horiz_off = abs((adj_node.y - n.y) / (adj_node.x - n.x)) > 1; // displace text slightly
            text->setPos((adj_node.x + n.x) / 2 + (horiz_off ? 10 : 0) - 5, (adj_node.y + n.y) / 2 + (horiz_off ? 0 : 10) - 5);
        }
        ellipse = scene->addEllipse(n.x, n.y, 10, 10, outlinePen, n.known ? greenBrush : blueBrush);

        if (n.known) {
            text = scene->addText(QString::number(n.cost), QFont("Arial", 8));
            text->setPos(n.x, n.y - 18);
        }
    }


//    rectangle = scene->addRect(0, 0, 10, 10, outlinePen, blueBrush);

    //rectangle = scene->addRect(-ui->graphicsView->width(), -ui->graphicsView->height(), 50, 50, outlinePen, blueBrush);
    //ellipse = scene->addEllipse(-100, -200, 50, 50, outlinePen, magentaBrush);

    // addEllipse(x,y,w,h,pen,brush)
//    ellipse = scene->addEllipse(0, -100, 300, 60, outlinePen, greenBrush);

    //text = scene->addText("TEAM PIZZA!", QFont("Arial", 20) );
    //text->setFlag(QGraphicsItem::ItemIsMovable);
}

MainWindow::~MainWindow()
{
    delete ui;
}

