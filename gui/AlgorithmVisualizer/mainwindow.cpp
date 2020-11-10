#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *title1 = new QListWidgetItem("Path Finding");
    title1->setFlags(title1->flags() & ~Qt::ItemIsSelectable);
    QFont fnt1 = title1->font();
    fnt1.setWeight(QFont::Bold);
    title1->setFont(fnt1);
    ui->listWidget->addItem(title1);
    ui->listWidget->addItem("   Dijkstra's");
    ui->listWidget->addItem("   Breadth first");
    ui->listWidget->addItem("   Depth first");
    QListWidgetItem *title2 = new QListWidgetItem("Sorting");
    title2->setFlags(title2->flags() & ~Qt::ItemIsSelectable);
    QFont fnt2 = title2->font();
    fnt2.setWeight(QFont::Bold);
    title2->setFont(fnt2);
    ui->listWidget->addItem(title2);
    ui->listWidget->addItem("   Quick");
    ui->listWidget->addItem("   Shell");
    ui->listWidget->addItem("   Merge");
    ui->listWidget->addItem("   Bubble");
    ui->listWidget->addItem("   Bogo");
}

MainWindow::~MainWindow()
{
    delete ui;
}

