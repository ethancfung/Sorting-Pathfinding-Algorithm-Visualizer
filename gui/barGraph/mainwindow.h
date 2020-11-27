#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
  int amount;
  bool isradix;
  int getNextGap(int gap);
  void sortByExp(int exponentValue);
  QString vertString(QString x);
 protected:
  void paintEvent(QPaintEvent*);
};



class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget* parent = 0);
  ~MainWindow();
    float DefSize = 50;
private slots:
  void bubble_released();
  void insertion_released();
  void selection_released();
  void brick_released();
  void radix_released();
  void quick_released();
  void cocktail_released();
  void comb_released();
  void setDelay();
  void setup();
  void pancake_released();
private:
  Ui::MainWindow* ui;
  DrawBars* TheDrawBars;
};







#endif // MAINWINDOW_H
