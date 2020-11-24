#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    AlgDisplayWindow display;
    display.setModal(true);
    display.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this,tr("Algorithm Info"),tr("Info on algorithms/sorts : \
                                                          - Selection sort: \
                                                                  ○ Finds the smallest element in the array and swaps it to the sorted section. \
                                                          - Insertion sort: \
                                                                  ○ Moves through adjacent elements in the array and insert element to the correct position if the element is out of place. \
                                                          - Bubble sort: \
                                                                  ○ Goes through list and swaps the highest adjacent elements. \
                                                          - Quick sort: \
                                                                  ○ It picks an element as pivot and partitions the given array around the picked pivot. \
                                                          - Radix sort: \
                                                                  ○ An integer sorting algorithm that sorts data with integer keys by grouping the keys by individual digits that share the same significant position and value. \
                                                          - Merge sort:\
                                                                  ○ It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.\
                                                          - Heap sort:\
                                                                  ○ Finds the maximum element and place the maximum element at the end. It repeats the same process for the remaining elements.\
                                                          - Cocktail sort:\
                                                                  ○ similar to bubble sort but traverse and swaps in both directions alternatively instead of just one way\
                                                          - A* algorithm:\
                                                                  ○ A best-first search, meaning that it is formulated in terms of weighted graphs: starting from a specific starting node of a graph, it aims to find a path to the given goal node having the smallest cost\
                                                          - Dijkstra's algorithm:\
                                                                  ○  Finds the shortest path from a starting node to a target node in a weighted graph by creating a tree of shortest paths from the starting vertex, the source, to all other points in the graph."));
}
