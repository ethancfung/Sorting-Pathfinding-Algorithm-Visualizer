#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsScene>
#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsItem>
#include "DijkstraUtil.h"
namespace Ui {
class MainWindow;
}

struct MyValue {
    int Value;
    QPoint Pos;
    QColor Color;
    bool operator> ( const MyValue& rhs) {
        return this->Value > rhs.Value ;
    }
    bool operator< ( const MyValue& rhs) {
        return this->Value < rhs.Value ;
    }
};


class DrawBars : public QWidget {
public:
    std::vector<MyValue> list;
    DrawBars();
    void  BubbleSort();
    void InsertionSort();
    void CocktailSort();
    void SelectionSort();
    void BrickSort();
    void QuickSort( int l, int h);
    void RadixSort(int sizeA);
    void CombSort(int n);
    void PancakeSort(int n);
    void flip(int i);
    void swap(int x, int y);
    int findMaxVal( int n);
    int findMaxIndex( int n);
    int partition( int l, int h);
    int delayTime;
    int b1;
    int b2;
    int xSize;
    int ySize;
    int amount;
    bool isradix;
    bool pathfinding;
    int getNextGap(int gap);
    void sortByExp(int exponentValue);
    QString vertString(QString x);
    void GnomeSort( int n);
    void StoogeSort(int l, int h);
    void merge(int left, int middle, int right);
    void MergeSort(int leftIndex, int rightIndex);
    Graph *graph;
    QGraphicsScene *scene;
    bool start;
    QRect r;
//    QSize size;
protected:
    void paintEvent(QPaintEvent*);


};



class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();
    float DefSize = 50;
    DrawBars* TheDrawBars;
    Ui::MainWindow* ui;
private slots:
    void setDelay();
    void setup();
    void complete_released();

    void on_startButton_clicked();

    void on_alg_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_pressed();

    void on_pushButton_released();

private:


};







#endif // MAINWINDOW_H
