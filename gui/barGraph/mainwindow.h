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
  void  bubbleSort();
  void InsertionSort();
  void SelectionSort();
  void swap(int x, int y, int d);
  int delayTime;
  int b1;
  int b2;

 protected:
  void paintEvent(QPaintEvent*);
};



class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget* parent = 0);
  ~MainWindow();
    const int DefSize = 50;
    const int DefNum = 50;
 private slots:
  void bubble_released();
  void insertion_released();
  void selection_released();
  void setDelay();
 private:
  Ui::MainWindow* ui;
  DrawBars* TheDrawBars;
};







#endif // MAINWINDOW_H
