#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFrame>
#include <QPainter>
#include <QTime>
#include <time.h>

MainWindow::MainWindow(QWidget* parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow) {
  ui->setupUi(this);

  TheDrawBars = new DrawBars;
  TheDrawBars->resize(width() - 100, height());
  TheDrawBars->setParent(this);
  TheDrawBars->show();
  srand (time(NULL));
  connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(insertion_released()));
  connect(ui->pushButton,SIGNAL(released()),this,SLOT(bubble_released()));
  connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(selection_released()));
//  connect(ui->spinBox,SIGNAL(change()),this,SLOT(setDelay()));
}

MainWindow::~MainWindow() {
  delete ui;
}


void delay(int x) {
  QTime dieTime = QTime::currentTime().addMSecs(x);
  while (QTime::currentTime() < dieTime)
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}


//**********SORTS**********
void DrawBars::bubbleSort() {
  bool swapped = true;
  int j = 0;
  MyValue tmp;
  while (swapped) {
    swapped = false;
    j++;
    for (unsigned int i = 0; i < list.size() - j; i++) {
      if (list[i] > list[i + 1]) {
        swap(i,i+1,1000);
        swapped = true;
      }
    }
  }
}

void DrawBars::InsertionSort() {
    int i, j;
        for (i = 1; i < int(list.size()); i++) {
            j = i;
            while (list[j] < list[j - 1]) {
                swap(j, j-1,50);
                j -= 1;
            }
        }
}

void DrawBars::SelectionSort(){
    int base = 0;
    auto min = list[0];
    int mini = 0;
    while (base<=int(list.size())-1){
    for(int i = base; i < int(list.size());i++){
        if(min>list[i]){
            min = list[i];
            mini=i;
        }
}
    swap(base,mini,1000);
    base++;
    mini = base;
    min = list[mini];
}
}


//**********SWAP**********
void DrawBars::swap(int x, int y, int d)
{
    b1=x;
    b2=y;
    update();
    delay(d/2);
    MyValue tmp;
    tmp.Value = list[x].Value;
    list[x].Value = list[y].Value;
    list[y].Value = tmp.Value;
    update();
    delay(d/2);

}
void MainWindow::setDelay(){
// TheDrawBars->delayTime = ui->slider->value();
}


//**********SLOTS for BUTTONS**********
void MainWindow::bubble_released() {

  TheDrawBars->list.clear();
  MyValue tmp;
  // create value list
  for (int var = 0; var < DefNum; ++var) {
    tmp.Pos = QPoint(var * (700/DefNum), DefSize);
    tmp.Value = 5+(rand() % 100);
    tmp.Color = Qt::black;
    TheDrawBars->list.push_back(tmp);
  }

  TheDrawBars->bubbleSort();
//  TheDrawBars->InsertionSort();
}

void MainWindow::insertion_released() {
  TheDrawBars->list.clear();
  MyValue tmp;
  // create value list
  for (int var = 0; var < DefNum; ++var) {
    tmp.Pos = QPoint(var * (700/DefNum), DefSize);
    tmp.Value = 5+(rand() % 100);
    tmp.Color = Qt::black;
    TheDrawBars->list.push_back(tmp);
  }

//  TheDrawBars->bubbleSort();
  TheDrawBars->InsertionSort();
}

void MainWindow::selection_released() {
  TheDrawBars->list.clear();
  MyValue tmp;
  // create value list
  for (int var = 0; var < DefNum; ++var) {
    tmp.Pos = QPoint(var * (700/DefNum), DefSize);
    tmp.Value = 5+(rand() % 100);
    tmp.Color = Qt::black;
    TheDrawBars->list.push_back(tmp);
  }

  TheDrawBars->SelectionSort();
}




DrawBars::DrawBars() {}


void DrawBars::paintEvent(QPaintEvent*) {
  QPainter painter(this);
  painter.setRenderHint(QPainter::Antialiasing);
  painter.drawRect(rect());
  for (int c = 0; c < int(list.size()); ++c) {
    painter.setPen(list[c].Color);
    QRect r;
    r.setRect(list[c].Pos.rx(), 600, (700/50),-list[c].Value*5.5);
    painter.fillRect(r, QBrush(c==b1 or c ==b2?Qt::green:Qt::blue, Qt::SolidPattern));
    painter.drawRect(r);
    QFont font = painter.font() ;
    font.setPointSize(8);
    painter.setFont(font);
    painter.drawText(r, Qt::AlignCenter, QString::number(list[c].Value));

  }

}
