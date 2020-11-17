#ifndef DIJKSTRAUTIL_H
#define DIJKSTRAUTIL_H

#include <vector>
#include <mainwindow.h>

using namespace std;

class Node {
    public:
        float x, y; // display purposes
        bool known;
        int cost;
        vector<int> adj_nodes;
        vector<int> adj_dist;
        Node* pathNode;
};

class Graph {
    static const int NODESCATTER = 600;
    static const int NODEMINDIST = 50;
    public:
        Graph(int); // num of nodes
        void update();
        void draw(QGraphicsScene*);
        vector<Node> nodes;
};

#endif // DIJKSTRAUTIL_H
