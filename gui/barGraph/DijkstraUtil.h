#ifndef DIJKSTRAUTIL_H
#define DIJKSTRAUTIL_H

#include <vector>
#include <queue>
#include <QGraphicsScene>

using namespace std;

struct Node {
    float x, y; // displaying purposes
    bool known;
    int cost; // sum distance from starting node
    vector<int> adj_nodes; // indices for nodes adjacent to this one
    vector<int> adj_dist; // dist to each node
    int path; // index of next node in shortest path to start node
};

class Graph {
    static const int NODESCATTER = 500; // graph generation constants
    static const int NODEMINDIST = 100;
public:
    Graph(int, float); // num of nodes. Recommended: 8, 0-1 probability of creating additional adjacency between nodes. Recommended: 0.2
    void update(); // call draw after update
    void draw(QGraphicsScene*);

    vector<Node> nodes;
    queue<int> next; // indices of next nodes to calculate
};

#endif // DIJKSTRAUTIL_H
