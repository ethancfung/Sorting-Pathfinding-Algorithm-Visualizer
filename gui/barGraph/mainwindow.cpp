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
  connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(setDelay()));
  connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(setamount()));
  connect(ui->spinBox,SIGNAL(valueChanged()),this,SLOT(setDelay()));
  TheDrawBars->delayTime = 10;
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

void DrawBars::RadixSort()
{//once again passed by reference is clutch
        int maxVal = findMaxVal(50);

        //sort vArray maxVal number of times based on the size
        for (int exponentialVal = 1; maxVal / exponentialVal > 0; exponentialVal *= 10) { //keep multiplying by a factor of 10 until we reach the length of the max value (ex: max = 1000, i = 1, so is divisible and not 0, 10 is still divisible, and 100 as well, finally when we reach 1000, the val = 0 and as such we only do three iterations/loops
            sortByExp( exponentialVal); //will do at most three iterations, possibly 4 given a four digit limit for random numbers
        }
}

void DrawBars::quicksort( int l, int h) {
    if (l < h) {//confirms there is at least two elements
        int pivot = partition( l, h);
        quicksort( l, pivot-1);
        quicksort( pivot+1, h);
    }
}



//**********SWAP**********
void DrawBars::swap(int x, int y, int d)
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
            swap(i, j,500); //note that i continues along until we find a value that is larger than the pivot. Until then, the swaps are meaningless
        }
    }
    swap(h, i+1,500);
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

void MainWindow::setDelay(){
 TheDrawBars->delayTime = ui->spinBox->value();
 //qInfo(QString::number(TheDrawBars->delayTime));
}

void MainWindow::setamount()
{
    DefSize = ui->spinBox_2->value();
    DefNum = ui->spinBox_2->value();
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

  TheDrawBars->RadixSort();
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
