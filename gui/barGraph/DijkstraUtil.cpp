#include "DijkstraUtil.h"
#include <time.h>
#include <stdlib.h>
#include <math.h>

#include <QGraphicsTextItem>
//#include <iostream>

Graph::Graph(int num, float connectivity) {
    static int seeded = 0;
    if (seeded == 0) {
        seeded = 1;
        srand((unsigned int)time(NULL));
    }

    for (int i = 0; i < num; ++i) {
        Node n = Node();
        bool flag = true;
        while (flag) {
            flag = false;
            n.x = (float)rand() / (float)(RAND_MAX) * NODESCATTER+150;
            n.y = (float)rand() / (float)(RAND_MAX) * NODESCATTER+150;

            for (int j = 0; j < i; ++j) { // enforce minimum dist between nodes
                if (sqrt(pow(n.x - nodes[j].x, 2) + pow(n.y - nodes[j].y, 2)) < NODEMINDIST) {
                    flag = true;
                    break;
                }
            }
        }
        n.known = false;
        n.cost = i == num - 1 ? 0 : INT_MAX; // index num-1 is starting node
        n.path = -1;

        bool has_adj = false; // have at least 1 adjacent node
        for (int j = 0; j < i; ++j) {
            if ((float)rand()/(float)RAND_MAX < connectivity || (!has_adj && j == i - 1)) {
                has_adj = true;
                int dist = (int)(sqrt(pow(n.x - nodes[j].x, 2) + pow(n.y - nodes[j].y, 2)) / 50) + 1;
                n.adj_dist.push_back(dist);
                n.adj_nodes.push_back(j);
                Node* nn = &nodes[j]; // adjacent = two ways
                nn->adj_nodes.push_back(i);
                nn->adj_dist.push_back(dist);
            }
        }
        nodes.push_back(n);
    }
    next.push(num-1); // get everything started
}

void Graph::update() {
    if (!next.empty()) {
        int current_index = next.front();
        Node* current_node = &nodes[current_index];
        next.pop();
        current_node->known = true;

        for (int i = 0; i < (int)current_node->adj_nodes.size(); ++i) {
            int adj_index = current_node->adj_nodes[i];
            int adj_dist = current_node->adj_dist[i];
            Node* adj_node = &nodes[adj_index];
            if (adj_node->cost > current_node->cost + adj_dist) {
                adj_node->path = current_index;
                adj_node->cost = current_node->cost + adj_dist;
            }
            if (!adj_node->known) {
                next.push(adj_index);
            }
        }
    }
}

void Graph::draw(QGraphicsScene* scene) {
    scene->clear();
    QBrush greenBrush(Qt::green);
    QBrush blueBrush(Qt::blue);
    QBrush redBrush(Qt::red);
    QBrush whiteBrush(Qt::white);
    QPen outlinePen(Qt::black);
    outlinePen.setWidth(1);

    // legend
    scene->addEllipse(-100, 100, 10, 10, outlinePen, blueBrush);
    QGraphicsTextItem* text1 = scene->addText(" : Unknown", QFont("Arial", 8));
    text1->setPos(-95, 95);
    scene->addEllipse(-100, 110, 10, 10, outlinePen, greenBrush);
    QGraphicsTextItem* text2 = scene->addText(" : Known", QFont("Arial", 8));
    text2->setPos(-95, 105);
    scene->addEllipse(-100, 120, 10, 10, outlinePen, redBrush);
    QGraphicsTextItem* text3 = scene->addText(" : Queued", QFont("Arial", 8));
    text3->setPos(-95, 115);
    QGraphicsTextItem* text4 = scene->addText("Distance from start", QFont("Arial", 8));
    text4->setPos(-105, 132);
    scene->addLine(-60, 155, 0, 205, outlinePen);
    scene->addEllipse(-65, 150, 10, 10, outlinePen, whiteBrush);
    QGraphicsTextItem* text5 = scene->addText("Distance", QFont("Arial", 8));
    text5->setPos(-35, 160);


    for (int i = 0; i < (int)nodes.size(); ++i) { // TODO omnibus use iterator instead
        Node n = nodes[i];
        for (int j = 0; j < (int)n.adj_nodes.size(); ++j) {
            Node adj_node = nodes[n.adj_nodes[j]];
            scene->addLine(adj_node.x + 5, adj_node.y + 5, n.x + 5, n.y + 5, outlinePen);

            QGraphicsTextItem* text = scene->addText(QString::number(n.adj_dist[j]), QFont("Arial", 8));
            bool horiz_off = abs((adj_node.y - n.y) / (adj_node.x - n.x)) > 1; // displace text slightly based on slope of line
            text->setPos((adj_node.x + n.x) / 2 + (horiz_off ? 10 : 0) - 5, (adj_node.y + n.y) / 2 + (horiz_off ? 0 : 10) - 5);
        }
        scene->addEllipse(n.x, n.y, 10, 10, outlinePen, n.known ? greenBrush : n.cost == INT_MAX ? blueBrush : redBrush);

        if (n.cost != INT_MAX) {
            QGraphicsTextItem* text = scene->addText(QString::number(n.cost), QFont("Arial", 8));
            text->setPos(n.x, n.y - 18);
        }
    }
}
