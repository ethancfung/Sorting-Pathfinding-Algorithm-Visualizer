#ifndef DIJKSTRAWINDOW_H
#define DIJKSTRAWINDOW_H

#include <QDialog>
#include "DijkstraUtil.h"
#include <QGraphicsScene>

namespace Ui {
class DijkstraWindow;
}

class DijkstraWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DijkstraWindow(QWidget *parent = nullptr);
    ~DijkstraWindow();

private:
    Ui::DijkstraWindow *ui;

    QGraphicsScene *scene;

    Graph *graph;
private slots:
    void nextPressed();
};

#endif // DIJKSTRAWINDOW_H
