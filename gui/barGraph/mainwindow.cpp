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
  connect(ui->cocktail,SIGNAL(released()),this,SLOT(cocktail_released()));
  connect(ui->comb,SIGNAL(released()),this,SLOT(comb_released()));
  connect(ui->brick,SIGNAL(released()),this,SLOT(brick_released()));
  connect(ui->pancake,SIGNAL(released()),this,SLOT(pancake_released()));
  connect(ui->gnome,SIGNAL(released()),this,SLOT(gnome_released()));
  connect(ui->stooge,SIGNAL(released()),this,SLOT(stooge_released()));
  connect(ui->setDelay,SIGNAL(released()),this,SLOT(setDelay()));
  connect(ui->spinBox,SIGNAL(valueChanged()),this,SLOT(setDelay()));
  connect(ui->complete,SIGNAL(released()),this,SLOT(complete_released()));
  TheDrawBars->delayTime = 10;
  TheDrawBars->amount = DefSize;
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
        for (int j = 1; j < int(list.size()); j++) {

            while (list[j] < list[j - 1]) {
                swap(j, j-1);
                j -= 1;
            }
        }
}

void DrawBars::CocktailSort()
{
    bool swapped = true;
    int bottom = 0;
    int top = list.size();
    MyValue tmp;
    while (swapped) {
      swapped = false;
      top--;
      for ( int i = 0; i < top; i++) {
        if (list[i] > list[i + 1]) {
          swap(i,i+1);
          swapped = true;
        }
      }
      bottom++;
      for ( int i = top; i > bottom; i--) {
        if (list[i] < list[i - 1]) {
          swap(i,i-1);
          swapped = true;
        }
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

void DrawBars::CombSort(int n)
{
    // Initialize gap
        int gap = n;
        bool swapped = true;
        while (gap != 1 || swapped == true)
        {
            gap = getNextGap(gap);
            swapped = false;
            for (int i=0; i<n-gap; i++)
            {
                if (list[i].Value > list[i+gap].Value)
                {
                    swap(i, i+gap);
                    swapped = true;
                }
            }
        }
}

void DrawBars::PancakeSort(int n)
{
    for (int i = n; i > 1;--i){
            int mi = findMaxIndex(i);
            if (mi != i - 1) {
                flip( mi);
                flip( i - 1);
            }
    }
}



void DrawBars::QuickSort( int l, int h) {
    if (l < h) {//confirms there is at least two elements
        int pivot = partition( l, h);
        QuickSort( l, pivot-1);
        QuickSort( pivot+1, h);
    }
}

void DrawBars::BrickSort(){
    bool swapped = true;
    int j = 0;
    MyValue tmp;
    while (swapped) {
      swapped = false;
//      j++;
      for (unsigned int i = 0; i < list.size() - j; i+=2) {
        if (list[i] > list[i + 1]) {
          swap(i,i+1);
          swapped = true;
        }
      }
      for (unsigned int i = 1; i < list.size() - j-1; i+=2) {
        if (list[i] > list[i + 1]) {
          swap(i,i+1);
          swapped = true;
        }
      }
    }
}
void DrawBars::GnomeSort( int n)
{
    int i = 0;

    while (i < n) {
        if (i == 0)
            i++;
        if (list[i].Value >= list[i - 1].Value)
            i++;
        else {
            swap(i, i - 1);
            i--;
        }
    }
}
void DrawBars::StoogeSort( int l, int h)
{
    if (l >= h)
        return;

    // If first element is smaller than last,
    // swap them
    if (list[l].Value > list[h].Value)
        swap(l, h);

    // If there are more than 2 elements in
    // the array
    if (h - l + 1 > 2) {
        int t = (h - l + 1) / 3;
        StoogeSort( l, h - t);
        StoogeSort( l + t, h);
        StoogeSort( l, h - t);
    }
}



//**********SWAP**********
void DrawBars::swap(int x, int y)
{
    b1=x;
    b2=y;
    update();
//    if(!complete)
        delay(delayTime<2 && delayTime>-1?2:delayTime);
    //delay(delayTime);
    MyValue tmp;
    tmp.Value = list[x].Value;
    list[x].Value = list[y].Value;
    list[y].Value = tmp.Value;
    update();
//    if(!complete)
        delay(delayTime<2 && delayTime>-1?2:delayTime);
    //delay(delayTime);

}

void DrawBars::flip(int i)
{
    int  start = 0;
        while (start < i) {
            swap(start,i);
            start++;
            i--;
        }
}




void MainWindow::setDelay(){
 TheDrawBars->delayTime = ui->spinBox->value();
 //qInfo(QString::number(TheDrawBars->delayTime));
}

void MainWindow::setup()
{
    DefSize = ui->spinBox_2->value();
    TheDrawBars->delayTime = ui->spinBox->value();
    TheDrawBars->amount = DefSize;
    TheDrawBars->isradix = false;
    TheDrawBars->complete = false;
    TheDrawBars->list.clear();
    MyValue tmp;
    // create value list
float x = 0;
    for (int var = 0; var < DefSize; ++var) {
      tmp.Pos = QPoint(x, DefSize);
      x+=( (900/DefSize));
      tmp.Value = 5+(rand() % 550);
      tmp.Color = Qt::black;
      TheDrawBars->list.push_back(tmp);
    }
}
//**********SLOTS for BUTTONS**********
void MainWindow::bubble_released() {
  setup();
  TheDrawBars->BubbleSort();
}
void MainWindow::pancake_released() {
  setup();
  TheDrawBars->PancakeSort(DefSize);
}

void MainWindow::insertion_released() {
setup();
  TheDrawBars->InsertionSort();
}
void MainWindow::brick_released() {
 setup();
  TheDrawBars->BrickSort();
}
void MainWindow::selection_released() {
 setup();
  TheDrawBars->SelectionSort();
}
void MainWindow::radix_released() {
    DefSize = ui->spinBox_2->value();
    TheDrawBars->amount = DefSize;
    TheDrawBars->isradix = false;
    TheDrawBars->complete = false;
    TheDrawBars->list.clear();
    MyValue tmp;
    // create value list
float x = 0;
    for (int var = 0; var < DefSize; ++var) {
      tmp.Pos = QPoint(x, DefSize);
      x+=( (900/DefSize));
      tmp.Value = 5+(rand() % 10000);
      tmp.Color = Qt::black;
      TheDrawBars->list.push_back(tmp);
    }
   TheDrawBars->isradix = true;
  TheDrawBars->RadixSort(DefSize);
}
void MainWindow::gnome_released() {
   setup();
  TheDrawBars->GnomeSort(DefSize);
}
void MainWindow::quick_released() {
setup();
  TheDrawBars->QuickSort(0,int(DefSize));
}

void MainWindow::cocktail_released()
{
   setup();
      TheDrawBars->CocktailSort();
}

void MainWindow::comb_released()
{
 setup();
      TheDrawBars->CombSort(DefSize);
}
void MainWindow::stooge_released()
{
 setup();
      TheDrawBars->StoogeSort(0,DefSize);
}




DrawBars::DrawBars() {}


void DrawBars::paintEvent(QPaintEvent*) {
  QPainter painter(this);
  painter.setRenderHint(QPainter::Antialiasing);
  painter.drawRect(rect());
  for (int c = 0; c < int(list.size()); ++c) {
    painter.setPen(list[c].Color);
    QRect r;
    r.setRect(list[c].Pos.rx(), 600, ((900)/amount),isradix?-list[c].Value/17:-list[c].Value);
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

int DrawBars::findMaxVal( int n)
{
    int max = list[0].Value;
     for (int i = 1; i < n; i++)
       if (list[i].Value > max)
         max = list[i].Value;
     return max;
}

int DrawBars::findMaxIndex(int n)
{
    int max = 0;
     for (int i = 1; i < n; i++)
       if (list[i].Value > list[max].Value)
         max = i;

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

int DrawBars::getNextGap(int gap){
        // Shrink gap by Shrink factor
        gap = (gap*10)/13;
        if (gap < 1)
            return 1;
        return gap;

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
        delay(delayTime<2 && delayTime>-1?2:delayTime);
        MyValue tmp;
        list[i].Value = outputVector.at(i);
        update();
        delay(delayTime<2 && delayTime>-1?2:delayTime);
    }
}

void MainWindow::complete_released()
{
 TheDrawBars->delayTime=-1;
}
