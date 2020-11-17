#include "DijkstraUtil.h"
#include <time.h>
#include <stdlib.h>
#include <math.h>

Graph::Graph(int num) {
    static int seeded = 0;
    if (seeded == 0) {
        seeded = 1;
        srand((unsigned int)time(NULL));
    }

    nodes = vector<Node>();
    for (int i = 0; i < num; ++i) {
        Node n = Node();
        bool flag = true;
        while (flag) {
            flag = false;
            n.x = (float)rand()/(float)(RAND_MAX) * NODESCATTER;
            n.y = (float)rand()/(float)(RAND_MAX) * NODESCATTER;
            for (int j = 0; j < i; ++j) {
                if (sqrt(pow(n.x - nodes[j].x, 2) + pow(n.y - nodes[j].y, 2)) < NODEMINDIST) {
                    flag = true;
                    break;
                }
            }
        }
        n.known = false;
        n.cost = 99999;
        n.adj_nodes = vector<int>();
        n.adj_dist = vector<int>();
        n.pathNode = NULL;

        bool has_adj = false;
        for (int j = 0; j < i; ++j) {
            if ((float)rand()/(float)RAND_MAX < ((float)2 / num) || (!has_adj && j == i - 1)) {
                has_adj = true;
                n.adj_dist.push_back((int)(sqrt(pow(n.x - nodes[j].x, 2) + pow(n.y - nodes[j].y, 2)) / 50) + 1);
                n.adj_nodes.push_back(j);
            }
        }
        nodes.push_back(n);
    }
}

void Graph::update() {
 // todo update nodes
}

void Graph::draw(QGraphicsScene* scene) {
    QBrush greenBrush(Qt::green);
    QBrush blueBrush(Qt::blue);
    QPen outlinePen(Qt::black);
    outlinePen.setWidth(1);
    for (int i = 0; i < (int)nodes.size(); ++i) {
        Node n = nodes[i];
        for (int j = 0; j < (int)n.adj_nodes.size(); ++j) {
            Node adj_node = nodes[n.adj_nodes[j]];
            scene->addLine(adj_node.x + 5, adj_node.y + 5, n.x + 5, n.y + 5, outlinePen);

            QGraphicsTextItem* text = scene->addText(QString::number(n.adj_dist[j]), QFont("Arial", 8));
            bool horiz_off = abs((adj_node.y - n.y) / (adj_node.x - n.x)) > 1; // displace text slightly
            text->setPos((adj_node.x + n.x) / 2 + (horiz_off ? 10 : 0) - 5, (adj_node.y + n.y) / 2 + (horiz_off ? 0 : 10) - 5);
        }
        scene->addEllipse(n.x, n.y, 10, 10, outlinePen, n.known ? greenBrush : blueBrush);

        if (n.known) {
            QGraphicsTextItem* text = scene->addText(QString::number(i), QFont("Arial", 8));
            text->setPos(n.x, n.y - 18);
        }
    }
}
