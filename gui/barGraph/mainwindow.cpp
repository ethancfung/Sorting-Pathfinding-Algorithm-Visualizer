#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFrame>
#include <QPainter>
#include <QTime>
#include <time.h>
#include <QScreen>

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    // Combo box setup
    ui->alg_comboBox->addItem("BubbleSort");
    ui->alg_comboBox->addItem("PancakeSort");
    ui->alg_comboBox->addItem("InsertionSort");
    ui->alg_comboBox->addItem("BrickSort");
    ui->alg_comboBox->addItem("SelectionSort");
    ui->alg_comboBox->addItem("RadixSort");
    ui->alg_comboBox->addItem("GnomeSort");
    ui->alg_comboBox->addItem("QuickSort");
    ui->alg_comboBox->addItem("CocktailSort");
    ui->alg_comboBox->addItem("CombSort");
    ui->alg_comboBox->addItem("StoogeSort");
    ui->alg_comboBox->addItem("MergeSort");
    ui->alg_comboBox->addItem("Dijkstra's");
    ui->widget->setMinimumSize(700, 700);
    //scene = new QGraphicsScene(this);
    TheDrawBars = new DrawBars;
//    TheDrawBars->size = qApp->screens()[0]->availableSize();
    TheDrawBars->resize(ui->widget->width(), ui->widget->height());
    TheDrawBars->setParent(ui->widget);
    TheDrawBars->xSize = ui->widget->width();
    TheDrawBars->ySize=ui->widget->height();
    TheDrawBars->show();
    TheDrawBars->pathfinding = false;
    srand (time(NULL));
    ui->spinBox_2->setMaximum(TheDrawBars->xSize);
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
    connect(ui->merge,SIGNAL(released()),this,SLOT(merge_released()));
    connect(ui->setDelay,SIGNAL(released()),this,SLOT(setDelay()));
    connect(ui->complete,SIGNAL(released()),this,SLOT(complete_released()));
    connect(ui->dijkstra,SIGNAL(released()),this,SLOT(dijkstra_released()));
    TheDrawBars->delayTime = 10;
    TheDrawBars->amount = DefSize;
    setupUI();

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



void DrawBars::MergeSort( int leftIndex, int rightIndex) {

    if (leftIndex>=rightIndex)	//for recursion
        return;

    int middle = (leftIndex + rightIndex - 1)/2;

    MergeSort(leftIndex,middle);
    MergeSort(middle+1,rightIndex);
    merge(leftIndex,middle,rightIndex);
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
    ui->spinBox_2->setMaximum(TheDrawBars->xSize);
    TheDrawBars->xSize = ui->widget->width();
    TheDrawBars->ySize=ui->widget->height();
    TheDrawBars->pathfinding = false;
    ui->complete->setText("complete");
    DefSize = ui->spinBox_2->value();
    TheDrawBars->delayTime = ui->spinBox->value();
    TheDrawBars->amount = DefSize;
    TheDrawBars->isradix = false;
    TheDrawBars->list.clear();
    MyValue tmp;
    // create value list
    float x = 0;
    for (int var = 0; var < DefSize; ++var) {
        tmp.Pos = QPoint(x, DefSize);
        x+=( TheDrawBars->xSize/DefSize);
        tmp.Value = 5+(rand() % (TheDrawBars->ySize-30));
        tmp.Color = Qt::black;
        TheDrawBars->list.push_back(tmp);
    }
}
//**********SLOTS for BUTTONS**********
void MainWindow::on_startButton_clicked()
{
    if(ui->alg_comboBox->currentText() == "BubbleSort"){
        setup();
        TheDrawBars->BubbleSort();
    }else if(ui->alg_comboBox->currentText() == "PancakeSort"){
        setup();
        TheDrawBars->PancakeSort(DefSize);
    }else if(ui->alg_comboBox->currentText() == "InsertionSort"){
        setup();
        TheDrawBars->InsertionSort();
    }else if(ui->alg_comboBox->currentText() == "BrickSort"){
        setup();
        TheDrawBars->BrickSort();
    }else if(ui->alg_comboBox->currentText() == "SelectionSort"){
        setup();
        TheDrawBars->SelectionSort();
    }else if(ui->alg_comboBox->currentText() == "RadixSort"){
        DefSize = ui->spinBox_2->value();
        TheDrawBars->amount = DefSize;
        TheDrawBars->isradix = false;
        TheDrawBars->delayTime = ui->spinBox->value();
        TheDrawBars->list.clear();
        MyValue tmp;
        // create value list
        float x = 0;
        for (int var = 0; var < DefSize; ++var) {
            tmp.Pos = QPoint(x, DefSize);
            x+=(TheDrawBars->xSize/DefSize);
            tmp.Value = 5+(rand() % 10000);
            tmp.Color = Qt::black;
            TheDrawBars->list.push_back(tmp);
        }
        TheDrawBars->isradix = true;
        TheDrawBars->RadixSort(DefSize);
    }else if(ui->alg_comboBox->currentText() == "GnomeSort"){
        setup();
        TheDrawBars->GnomeSort(DefSize);
    }else if(ui->alg_comboBox->currentText() == "QuickSort"){
        setup();
        TheDrawBars->QuickSort(0,int(DefSize));
    }else if(ui->alg_comboBox->currentText() == "CocktailSort"){
        setup();
        TheDrawBars->CocktailSort();
    }else if(ui->alg_comboBox->currentText() == "CombSort"){
        setup();
        TheDrawBars->CombSort(DefSize);
    }else if(ui->alg_comboBox->currentText() == "StoogeSort"){
        setup();
        TheDrawBars->StoogeSort(0,DefSize);
    }else if(ui->alg_comboBox->currentText() == "MergeSort"){
        setup();
        TheDrawBars->MergeSort(0,DefSize);
    }else if(ui->alg_comboBox->currentText() == "Dijkstra's"){
        TheDrawBars->graph = new Graph(8, 0.3f);
        TheDrawBars->pathfinding = true;
        //
        ui->complete->setText("next");
        //    ui->graphicsView->setScene(scene);

        update();
    }
}

void MainWindow::bubble_released()
{
    setup();
    TheDrawBars->BubbleSort();
}
void MainWindow::pancake_released()
{
    setup();
    TheDrawBars->PancakeSort(DefSize);
}

void MainWindow::insertion_released()
{
    setup();
    TheDrawBars->InsertionSort();
}
void MainWindow::brick_released()
{
    setup();
    TheDrawBars->BrickSort();
}
void MainWindow::selection_released()
{
    setup();
    TheDrawBars->SelectionSort();
}
void MainWindow::radix_released() {
    DefSize = ui->spinBox_2->value();
    TheDrawBars->amount = DefSize;
    TheDrawBars->isradix = false;
    TheDrawBars->delayTime = ui->spinBox->value();
    TheDrawBars->list.clear();
    MyValue tmp;
    // create value list
    float x = 0;
    for (int var = 0; var < DefSize; ++var) {
        tmp.Pos = QPoint(x, DefSize);
        x+=(TheDrawBars->xSize/DefSize);
        tmp.Value = 5+(rand() % 10000);
        tmp.Color = Qt::black;
        TheDrawBars->list.push_back(tmp);
    }
    TheDrawBars->isradix = true;
    TheDrawBars->RadixSort(DefSize);
}
void MainWindow::gnome_released()
{
    setup();
    TheDrawBars->GnomeSort(DefSize);
}
void MainWindow::quick_released()
{
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

void MainWindow::merge_released()
{
    setup();
    TheDrawBars->MergeSort(0,DefSize);
}
void MainWindow::dijkstra_released(){
    TheDrawBars->graph = new Graph(8, 0.3f);
    TheDrawBars->pathfinding = true;
    //
    ui->complete->setText("next");
    //    ui->graphicsView->setScene(scene);

    update();
}



DrawBars::DrawBars() {
}


void DrawBars::paintEvent(QPaintEvent*) {
    QPainter painter(this);
    //painter.drawText(100,100,QString::number(size.height()));
//    if(size.height()<2100){
        if(!pathfinding){

            painter.setRenderHint(QPainter::Antialiasing);
            painter.drawRect(rect());
            QBrush greenBrush(Qt::green, Qt::SolidPattern);
            QBrush blueBrush(Qt::blue, Qt::SolidPattern);
            for (int c = 0; c < int(list.size()); ++c) {
                painter.setPen(list[c].Color);
                QRect r;
                r.setRect(list[c].Pos.rx(), ySize, (xSize/amount),isradix?-list[c].Value/13:-list[c].Value);
                painter.fillRect(r, c==b1 or c ==b2?greenBrush:blueBrush);
                painter.drawRect(r);
                QFont font = painter.font();
                font.setPointSize(ySize<2000?7:3);
                painter.setFont(font);
                if(amount <=50)
                    painter.drawText(list[c].Pos.rx()+1, ySize-3+(isradix?-list[c].Value/13:-list[c].Value), QString::number(list[c].Value));
            }//end for
        }else{
            QBrush greenBrush(Qt::green);
            QBrush blueBrush(Qt::blue);
            QBrush redBrush(Qt::red);
            QBrush whiteBrush(Qt::white);
            QPen outlinePen(Qt::black);
            outlinePen.setWidth(1);

            // legend
            //painter.fillEllipse(r, QBrush(c==b1 or c ==b2?Qt::green:Qt::blue, Qt::SolidPattern));
            painter.setBrush(blueBrush);
            painter.setPen(outlinePen);
            painter.drawEllipse(50, 50, 10, 10);
            painter.drawText(60, 60," : Unknown");
            painter.setBrush(greenBrush);
            painter.drawEllipse(50, 60, 10, 10);
            painter.drawText(60, 70," : Known");
            painter.setBrush(redBrush);
            painter.drawEllipse(50, 70, 10, 10);
            painter.drawText(60, 80," : Queued");
            painter.drawText(50, 96,"Distance from start");
            painter.drawLine(90, 105, 140, 155);
            painter.setBrush(whiteBrush);
            painter.drawEllipse(85, 100, 10, 10);
            painter.drawText(115, 125,"Distance");


            for (int i = 0; i < (int)graph->nodes.size(); ++i) { // TODO omnibus use iterator instead
                Node n = graph->nodes[i];
                for (int j = 0; j < (int)n.adj_nodes.size(); ++j) {
                    Node adj_node = graph->nodes[n.adj_nodes[j]];
                    painter.drawLine(adj_node.x + 5, adj_node.y + 5, n.x + 5, n.y + 5);
                    bool horiz_off = abs((adj_node.y - n.y) / (adj_node.x - n.x)) > 1; // displace text slightly based on slope of line
                    painter.drawText((adj_node.x + n.x) / 2 + (horiz_off ? 10 : 0) - 3, (adj_node.y + n.y) / 2 + (horiz_off ? 0 : 10) + 5,QString::number(n.adj_dist[j]));

                    //text->setPos((adj_node.x + n.x) / 2 + (horiz_off ? 10 : 0) - 5, (adj_node.y + n.y) / 2 + (horiz_off ? 0 : 10) - 5);
                }
                painter.setBrush(n.known ? greenBrush : n.cost == INT_MAX ? blueBrush : redBrush);
                painter.drawEllipse(n.x, n.y, 10, 10);

                if (n.cost != INT_MAX) {
                    painter.drawText(n.x+2, n.y - 8,QString::number(n.cost));

                }
            }
        }
//    }else{//if small screen




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
        list[i].Value = outputVector.at(i);
        update();
        delay(delayTime<2 && delayTime>-1?2:delayTime);
    }
}

void DrawBars::merge( int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    //initalize temporary arrays
    int LEFT[n1];
    int RIGHT[n2];

    //copy data
    for (int i = 0; i < n1; i++){
        b1=i;
        update();
        delay(delayTime<2 && delayTime>-1?2:delayTime);
        LEFT[i] = list[left + i].Value;
        update();
        delay(delayTime<2 && delayTime>-1?2:delayTime);
    }
    for (int j = 0; j < n2; j++){
        b1=j;
        update();
        delay(delayTime<2 && delayTime>-1?2:delayTime);
        RIGHT[j] = list[middle + 1 + j].Value;
        update();
        delay(delayTime<2 && delayTime>-1?2:delayTime);
    }
    //inital indexes of subarrays
    int i = 0;		//first
    int j = 0;		//second
    int k = left;	//merged

    //merge temp arrays back into main array
    while (i < n1 && j < n2) {
        if (LEFT[i] <= RIGHT[j]) {
            b1=k;
            update();
            delay(delayTime<2 && delayTime>-1?2:delayTime);
            list[k].Value = LEFT[i];
            update();
            delay(delayTime<2 && delayTime>-1?2:delayTime);
            i++;
        } else {
            b1=k;
            update();
            delay(delayTime<2 && delayTime>-1?2:delayTime);
            list[k].Value = RIGHT[j];
            update();
            delay(delayTime<2 && delayTime>-1?2:delayTime);
            j++;
        }
        k++;
    }
    //copy remaining elements of the LEFT and RIGHT temp arrays
    while (i < n1) {	//LEFT
        b1=k;
        update();
        delay(delayTime<2 && delayTime>-1?2:delayTime);
        list[k].Value = LEFT[i];
        update();
        delay(delayTime<2 && delayTime>-1?2:delayTime);
        i++;
        k++;
    }
    while (j < n2) {	//RIGHT
        b1=k;
        update();
        delay(delayTime<2 && delayTime>-1?2:delayTime);
        list[k].Value = RIGHT[j];
        update();
        delay(delayTime<2 && delayTime>-1?2:delayTime);
        j++;
        k++;
    }
}

void MainWindow::complete_released()
{
    if(ui->complete->text() == "complete"){
        TheDrawBars->delayTime=-1;
    }else{
        TheDrawBars->graph->update();
        update();
    }
}

void MainWindow::setupUI(){
//    ui->centralWidget->setMaximumSize(TheDrawBars->size.width()/2,TheDrawBars->size.height()/2);
//    ui->centralWidget->setMinimumSize(TheDrawBars->size.width()/2,TheDrawBars->size.height()/2);
//    float spacing = (TheDrawBars->size.height()/2)-(15*(ui->insertion->height()));
//    spacing = spacing/15;
//    QFont font = ui->complete->font();
//    font.setPointSize(5000/(TheDrawBars->size.height()/2));
//    ui->spinBox->setFont(font);
//    ui->spinBox_2->setFont(font);
//    ui->insertion->setFont(font);
//    int min = TheDrawBars->size.width()/50+10;
    //    ui->insertion->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->insertion->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->selection->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->selection->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->bubble->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->bubble->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->quick->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->quick->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->radix->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->radix->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->stooge->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->stooge->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->brick->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->brick->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->merge->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->merge->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->pancake->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->pancake->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->cocktail->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->cocktail->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->comb->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->comb->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->gnome->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->gnome->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->spinBox->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->spinBox->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->spinBox_2->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->spinBox_2->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->setDelay->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->setDelay->setMaximumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //    ui->complete->setMinimumSize(TheDrawBars->size.width()/50,TheDrawBars->size.height()/75);
    //ui->complete->setMaximumSize(map(0,TheDrawBars->size.width(),0,200),TheDrawBars->size.height()/75);
//    ui->insertion->move(TheDrawBars->size.width()/2-min,1*(ui->insertion->height()));
//    ui->bubble->setFont(font);
//    ui->bubble->move(TheDrawBars->size.width()/2-min,ui->insertion->pos().y()+(ui->insertion->height()));
//    ui->selection->setFont(font);
//    ui->selection->move(TheDrawBars->size.width()/2-min,ui->bubble->pos().y()+(ui->insertion->height()));
//    ui->radix->setFont(font);
//    ui->radix->move(TheDrawBars->size.width()/2-min,ui->selection->pos().y()+(ui->insertion->height()));
//    ui->quick->setFont(font);
//    ui->quick->move(TheDrawBars->size.width()/2-min,ui->radix->pos().y()+(ui->insertion->height()));
//    ui->cocktail->setFont(font);
//    ui->cocktail->move(TheDrawBars->size.width()/2-min,ui->quick->pos().y()+(ui->insertion->height()));
//    ui->comb->setFont(font);
//    ui->comb->move(TheDrawBars->size.width()/2-min,ui->cocktail->pos().y()+(ui->insertion->height()));
//    ui->brick->setFont(font);
//    ui->brick->move(TheDrawBars->size.width()/2-min,ui->comb->pos().y()+(ui->insertion->height()));
//    ui->pancake->setFont(font);
//    ui->pancake->move(TheDrawBars->size.width()/2-min,ui->brick->pos().y()+(ui->insertion->height()));
//    ui->gnome->setFont(font);
//    ui->gnome->move(TheDrawBars->size.width()/2-min,ui->pancake->pos().y()+(ui->insertion->height()));
//    ui->stooge->setFont(font);
//    ui->stooge->move(TheDrawBars->size.width()/2-min,ui->gnome->pos().y()+(ui->insertion->height()));
//    ui->merge->setFont(font);
//    ui->merge->move(TheDrawBars->size.width()/2-min,ui->stooge->pos().y()+(ui->insertion->height()));
//    ui->spinBox->move(TheDrawBars->size.width()/2-min,ui->merge->pos().y()+(ui->insertion->height()));
//    ui->setDelay->setFont(font);
//    ui->setDelay->move(TheDrawBars->size.width()/2-min,ui->spinBox->pos().y()+(ui->insertion->height()));
//    ui->label->move(TheDrawBars->size.width()/2-min,ui->setDelay->pos().y()+(ui->insertion->height()));
//    ui->spinBox_2->move(TheDrawBars->size.width()/2-min,ui->label->pos().y()+(ui->insertion->height()));
//    ui->complete->setFont(font);
//    ui->complete->move(TheDrawBars->size.width()/2-min,ui->spinBox_2->pos().y()+(ui->insertion->height()));
//    ui->label_2->move(TheDrawBars->size.width()/2-min,ui->complete->pos().y()+(ui->insertion->height()));
//    ui->dijkstra->setFont(font);
//    ui->dijkstra->move(TheDrawBars->size.width()/2-min,ui->label_2->pos().y()+(ui->insertion->height()));
    //        MainWindow::setMinimumSize((TheDrawBars->size.width()/2,TheDrawBars->size.height()/2))

    // }

    //ui->graphicsView->setScene(scene);
    //graph = new Graph(8, 0.3f);
    //graph->draw(scene);
}


