/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *selection;
    QPushButton *stooge;
    QPushButton *comb;
    QSpinBox *spinBox_2;
    QPushButton *quick;
    QLabel *label;
    QPushButton *setDelay;
    QPushButton *gnome;
    QPushButton *cocktail;
    QPushButton *merge;
    QPushButton *complete;
    QSpinBox *spinBox;
    QPushButton *dijkstra;
    QPushButton *radix;
    QPushButton *pancake;
    QLabel *label_2;
    QPushButton *insertion;
    QPushButton *brick;
    QPushButton *bubble;
    QWidget *widget;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 800);
        MainWindow->setMinimumSize(QSize(1000, 800));
        MainWindow->setMaximumSize(QSize(2000, 1600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        selection = new QPushButton(centralWidget);
        selection->setObjectName(QString::fromUtf8("selection"));
        selection->setGeometry(QRect(940, 70, 50, 23));
        QFont font;
        font.setPointSize(7);
        selection->setFont(font);
        stooge = new QPushButton(centralWidget);
        stooge->setObjectName(QString::fromUtf8("stooge"));
        stooge->setGeometry(QRect(940, 380, 50, 23));
        comb = new QPushButton(centralWidget);
        comb->setObjectName(QString::fromUtf8("comb"));
        comb->setGeometry(QRect(940, 216, 50, 23));
        comb->setFont(font);
        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(940, 573, 50, 19));
        spinBox_2->setFont(font);
        spinBox_2->setAccelerated(true);
        spinBox_2->setMinimum(2);
        spinBox_2->setMaximum(900);
        spinBox_2->setValue(50);
        quick = new QPushButton(centralWidget);
        quick->setObjectName(QString::fromUtf8("quick"));
        quick->setGeometry(QRect(940, 130, 50, 23));
        quick->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(940, 540, 50, 15));
        label->setMaximumSize(QSize(16777215, 15));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        setDelay = new QPushButton(centralWidget);
        setDelay->setObjectName(QString::fromUtf8("setDelay"));
        setDelay->setGeometry(QRect(940, 499, 50, 23));
        setDelay->setFont(font);
        gnome = new QPushButton(centralWidget);
        gnome->setObjectName(QString::fromUtf8("gnome"));
        gnome->setGeometry(QRect(940, 339, 50, 23));
        gnome->setFont(font);
        cocktail = new QPushButton(centralWidget);
        cocktail->setObjectName(QString::fromUtf8("cocktail"));
        cocktail->setGeometry(QRect(940, 175, 50, 23));
        cocktail->setFont(font);
        merge = new QPushButton(centralWidget);
        merge->setObjectName(QString::fromUtf8("merge"));
        merge->setGeometry(QRect(940, 421, 50, 23));
        complete = new QPushButton(centralWidget);
        complete->setObjectName(QString::fromUtf8("complete"));
        complete->setGeometry(QRect(938, 610, 50, 23));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(940, 462, 50, 19));
        spinBox->setFont(font);
        spinBox->setAccelerated(true);
        spinBox->setMinimum(0);
        spinBox->setMaximum(10000);
        spinBox->setValue(10);
        dijkstra = new QPushButton(centralWidget);
        dijkstra->setObjectName(QString::fromUtf8("dijkstra"));
        dijkstra->setGeometry(QRect(940, 684, 50, 23));
        radix = new QPushButton(centralWidget);
        radix->setObjectName(QString::fromUtf8("radix"));
        radix->setGeometry(QRect(940, 100, 50, 23));
        radix->setFont(font);
        pancake = new QPushButton(centralWidget);
        pancake->setObjectName(QString::fromUtf8("pancake"));
        pancake->setGeometry(QRect(940, 298, 50, 23));
        pancake->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(940, 651, 50, 15));
        label_2->setMaximumSize(QSize(16777215, 15));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);
        insertion = new QPushButton(centralWidget);
        insertion->setObjectName(QString::fromUtf8("insertion"));
        insertion->setGeometry(QRect(940, 11, 50, 23));
        insertion->setFont(font);
        brick = new QPushButton(centralWidget);
        brick->setObjectName(QString::fromUtf8("brick"));
        brick->setGeometry(QRect(940, 257, 50, 23));
        brick->setFont(font);
        bubble = new QPushButton(centralWidget);
        bubble->setObjectName(QString::fromUtf8("bubble"));
        bubble->setGeometry(QRect(940, 40, 50, 23));
        bubble->setFont(font);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 931, 751));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Algorithm Visualizer", nullptr));
        selection->setText(QCoreApplication::translate("MainWindow", "Selection", nullptr));
        stooge->setText(QCoreApplication::translate("MainWindow", "Stooge", nullptr));
        comb->setText(QCoreApplication::translate("MainWindow", "Comb", nullptr));
        quick->setText(QCoreApplication::translate("MainWindow", "Quick", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Array size", nullptr));
        setDelay->setText(QCoreApplication::translate("MainWindow", "Set delay", nullptr));
        gnome->setText(QCoreApplication::translate("MainWindow", "Gnome", nullptr));
        cocktail->setText(QCoreApplication::translate("MainWindow", "Cocktail", nullptr));
        merge->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        complete->setText(QCoreApplication::translate("MainWindow", "Complete", nullptr));
        dijkstra->setText(QCoreApplication::translate("MainWindow", "Dijkstra's", nullptr));
        radix->setText(QCoreApplication::translate("MainWindow", "Radix", nullptr));
        pancake->setText(QCoreApplication::translate("MainWindow", "Pancake", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PathFinding", nullptr));
        insertion->setText(QCoreApplication::translate("MainWindow", "Insertion", nullptr));
        brick->setText(QCoreApplication::translate("MainWindow", "Odd-Even", nullptr));
        bubble->setText(QCoreApplication::translate("MainWindow", "Bubble", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
