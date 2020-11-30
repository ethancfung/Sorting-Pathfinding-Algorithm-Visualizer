#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
// w.setMinimumSize(w.ui->widget->width(), w.TheDrawBars->size.height()/2);
//    w.setMaximumSize(w.TheDrawBars->size.width()/2, w.TheDrawBars->size.height()/2);
    w.show();

    return a.exec();
}
