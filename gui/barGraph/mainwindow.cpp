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
  connect(ui->insertion,SIGNAL(released()),this,SLOT(insertion_released()));
  connect(ui->bubble,SIGNAL(released()),this,SLOT(bubble_released()));
  connect(ui->selection,SIGNAL(released()),this,SLOT(selection_released()));
  connect(ui->radix,SIGNAL(released()),this,SLOT(radix_released()));
  connect(ui->quick,SIGNAL(released()),this,SLOT(quick_released()));
  connect(ui->setDelay,SIGNAL(released()),this,SLOT(setDelay()));
  connect(ui->setAmount,SIGNAL(released()),this,SLOT(setamount()));
  connect(ui->spinBox,SIGNAL(valueChanged()),this,SLOT(setDelay()));
  TheDrawBars->delayTime = 10;
  TheDrawBars->amount = DefNum;
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
void DrawBars::BubbleSort() {
  bool swapped = true;
  int j = 0;
  MyValue tmp;
  while (swapped) {
    swapped = false;
    j++;
    for (unsigned int i = 0; i < list.size() - j; i++) {
      if (list[i] > list[i + 1]) {
        swap(i,i+1);
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
                swap(j, j-1);
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
    swap(base,mini);
    base++;
    mini = base;
    min = list[mini];
    }
}

void DrawBars::RadixSort(int sizeA)
{//once again passed by reference is clutch
        int maxVal = findMaxVal(sizeA);

        //sort vArray maxVal number of times based on the size
        for (int exponentialVal = 1; maxVal / exponentialVal > 0; exponentialVal *= 10) { //keep multiplying by a factor of 10 until we reach the length of the max value (ex: max = 1000, i = 1, so is divisible and not 0, 10 is still divisible, and 100 as well, finally when we reach 1000, the val = 0 and as such we only do three iterations/loops
            sortByExp( exponentialVal); //will do at most three iterations, possibly 4 given a four digit limit for random numbers
        }
}

void DrawBars::QuickSort( int l, int h) {
    if (l < h) {//confirms there is at least two elements
        int pivot = partition( l, h);
        QuickSort( l, pivot-1);
        QuickSort( pivot+1, h);
    }
}



//**********SWAP**********
void DrawBars::swap(int x, int y)
{
    b1=x;
    b2=y;
    update();
    delay(delayTime/2);
    MyValue tmp;
    tmp.Value = list[x].Value;
    list[x].Value = list[y].Value;
    list[y].Value = tmp.Value;
    update();
    delay(delayTime/2);

}




void MainWindow::setDelay(){
 TheDrawBars->delayTime = ui->spinBox->value();
 //qInfo(QString::number(TheDrawBars->delayTime));
}

void MainWindow::setamount()
{
    DefSize = ui->spinBox_2->value();
    DefNum = ui->spinBox_2->value();
    TheDrawBars->amount = DefNum;
}

//**********SLOTS for BUTTONS**********
void MainWindow::bubble_released() {
  TheDrawBars->isradix = false;
  TheDrawBars->list.clear();
  MyValue tmp;
  // create value list
  for (int var = 0; var < DefNum; ++var) {
    tmp.Pos = QPoint(var * (900/DefNum), DefSize);
    tmp.Value = 5+(rand() % 550);
    tmp.Color = Qt::black;
    TheDrawBars->list.push_back(tmp);
  }

  TheDrawBars->BubbleSort();
}

void MainWindow::insertion_released() {
  TheDrawBars->isradix = false;
  TheDrawBars->list.clear();
  MyValue tmp;
  // create value list
  for (int var = 0; var < DefNum; ++var) {
    tmp.Pos = QPoint(var * (900/DefNum), DefSize);
    tmp.Value = 5+(rand() % 550);
    tmp.Color = Qt::black;
    TheDrawBars->list.push_back(tmp);
  }

//  TheDrawBars->bubbleSort();
  TheDrawBars->InsertionSort();
}

void MainWindow::selection_released() {
  TheDrawBars->isradix = false;
  TheDrawBars->list.clear();
  MyValue tmp;
  // create value list
  for (int var = 0; var < DefNum; ++var) {
    tmp.Pos = QPoint(var * (900/DefNum), DefSize);
    tmp.Value = 5+(rand() % 550);
    tmp.Color = Qt::black;
    TheDrawBars->list.push_back(tmp);
  }

  TheDrawBars->SelectionSort();
}
void MainWindow::radix_released() {
    TheDrawBars->isradix = true;
  TheDrawBars->list.clear();
  MyValue tmp;
  // create value list
  for (int var = 0; var < DefNum; ++var) {
    tmp.Pos = QPoint(var * (900/DefNum), DefSize);
    tmp.Value = 5+(rand() % 10000);
    tmp.Color = Qt::black;
    TheDrawBars->list.push_back(tmp);
  }

  TheDrawBars->RadixSort(DefSize);
}

void MainWindow::quick_released() {
TheDrawBars->isradix = false;
  TheDrawBars->list.clear();
  MyValue tmp;
  // create value list
  float x = 0;
  for (int var = 0; var < DefNum; ++var) {
    tmp.Pos = QPoint(x, DefSize);
    x+=(900/DefNum);
    tmp.Value = 5+(rand() % 550);
    tmp.Color = Qt::black;
    TheDrawBars->list.push_back(tmp);
  }

  TheDrawBars->QuickSort(0,DefSize);
}



DrawBars::DrawBars() {}


void DrawBars::paintEvent(QPaintEvent*) {
  QPainter painter(this);
  painter.setRenderHint(QPainter::Antialiasing);
  painter.drawRect(rect());
  for (int c = 0; c < int(list.size()); ++c) {
    painter.setPen(list[c].Color);
    QRect r;
    r.setRect(list[c].Pos.rx(), 600, (900/amount),isradix?-list[c].Value/17:-list[c].Value);
    painter.fillRect(r, QBrush(c==b1 or c ==b2?Qt::green:Qt::blue, Qt::SolidPattern));
    painter.drawRect(r);
    QFont font = painter.font() ;
    font.setPointSize(6);
    painter.setFont(font);
if(amount <=50)
    painter.drawText(list[c].Pos.rx(), 580+(isradix?-list[c].Value/17:-list[c].Value), QString::number(list[c].Value));

  }

}
//**********Helper Functions**********




//**********Helper Functions**********

QString DrawBars::vertString(QString x){
    QString temp;
    for (int i = 0; i<x.length();i++);
    temp = x[0] + "\n";
    return temp;
}
int DrawBars::findMaxVal( int n)
{
    int max = list[0].Value;
     for (int i = 1; i < n; i++)
       if (list[i].Value > max)
         max = list[i].Value;
     return max;
}

int DrawBars::partition( int l, int h)
{
    int pivot = list[h].Value;

    int i = (l - 1);//setting both i & j indexes to -1 and 0 respectively

    for (int j = l; j <= h - 1; j++) {
        if (list[j].Value < pivot) {
            i++;
            swap(i, j); //note that i continues along until we find a value that is larger than the pivot. Until then, the swaps are meaningless
        }
    }
    swap(h, i+1);
    return (i+1);//change the index value of i to the pivot point once it is properly arranged in the array
}



void DrawBars::sortByExp(int exponentValue)
{

    int sizeOfVector = list.size();
    int tally[10];//hold number of times the same number has appeared
    std::vector<int> outputVector(sizeOfVector); //initializing outputVector

    //initialize count array to 0
    for (int i = 0; i < 10; i++) {
        tally[i] = 0;
    }

    //finding the total count of each element from 0-9

    for (int i = 0; i < sizeOfVector; i++)
        tally[((list[i].Value / exponentValue) % 10)]++;


    //changing tally so that it represents the correct position of each index
    for (int i = 1; i < 10; i++) {
        tally[i] += tally[i - 1];
    }

    for (int i = sizeOfVector-1; i >= 0; i--) {

        //outputVector.insert(outputVector.begin() +(count[((list[i].Value / exponentValue) % 10)] - 1) , list[i].Value);
        outputVector[tally[((list[i].Value / exponentValue) % 10)]-1] = list[i].Value;
        tally[((list[i].Value / exponentValue) % 10)]--;
    }

    for (int i = 0; i < sizeOfVector; i++) {
        b1=i;
        update();
        delay(delayTime/2);
        MyValue tmp;
        list[i].Value = outputVector.at(i);
        update();
        delay(delayTime/2);
    }
}
