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
};


class DrawBars : public QWidget {
 public:
  std::vector<MyValue> list;
  DrawBars();
  void  bubbleSort();
 protected:
  void paintEvent(QPaintEvent*);
};



class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget* parent = 0);
  ~MainWindow();

 private slots:
  void on_pushButton_released();

 private:
  Ui::MainWindow* ui;
  DrawBars* TheDrawBars;
};







#endif // MAINWINDOW_H
