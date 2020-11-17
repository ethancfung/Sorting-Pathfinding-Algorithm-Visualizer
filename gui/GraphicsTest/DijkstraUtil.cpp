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
