#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "algdisplaywindow.h"
#include "dijkstrawindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_visualizeButton_clicked();

    void on_algInfoButton_clicked();

private:
    Ui::MainWindow *ui;
    AlgDisplayWindow *algWindow;

};
#endif // MAINWINDOW_H
