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
}

MainWindow::~MainWindow() {
  delete ui;
}

void delay() {
  QTime dieTime = QTime::currentTime().addMSecs(50);
  while (QTime::currentTime() < dieTime)
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void DrawBars::bubbleSort() {
  bool swapped = true;
  int j = 0;
  MyValue tmp;
  while (swapped) {
    swapped = false;
    j++;
    for (unsigned int i = 0; i < list.size() - j; i++) {
      if (list[i] > list[i + 1]) {
        tmp.Value = list[i].Value;
        list[i].Value = list[i + 1].Value;
        list[i + 1].Value = tmp.Value;
        list[i].Pos.ry() += 5;
        list[i + 1].Pos.ry() -= 5;
        swapped = true;
        update();
        delay();
      }
    }
  }
}


void MainWindow::on_pushButton_released() {
  TheDrawBars->list.clear();
  const int DefSize = 50;
  const int DefNum = 50;
  MyValue tmp;
  // create value list
  for (int var = 0; var < DefNum; ++var) {
    tmp.Pos = QPoint(var * (700/DefNum), DefSize);
    tmp.Value = 5+(rand() % 100);
    tmp.Color = Qt::black;
    TheDrawBars->list.push_back(tmp);
  }

  TheDrawBars->bubbleSort();;
}


DrawBars::DrawBars() {}


void DrawBars::paintEvent(QPaintEvent*) {
  QPainter painter(this);
  painter.setRenderHint(QPainter::Antialiasing);
  painter.drawRect(rect());
  for (unsigned int c = 0; c < list.size(); ++c) {
    painter.setPen(list[c].Color);
    QRect r;
    r.setRect(list[c].Pos.rx(), 600, (700/50),-list[c].Value*5.5);
    painter.fillRect(r, QBrush(Qt::blue, Qt::SolidPattern));
    painter.drawRect(r);
    QFont font = painter.font() ;
    font.setPointSize(10);
    painter.setFont(font);
    painter.drawText(r, Qt::AlignCenter, QString::number(list[c].Value));

  }

}
