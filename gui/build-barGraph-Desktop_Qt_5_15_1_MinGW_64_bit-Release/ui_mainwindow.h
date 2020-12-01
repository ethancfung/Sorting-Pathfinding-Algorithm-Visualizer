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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *alg_comboBox;
    QPushButton *startButton;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label;
    QSpinBox *spinBox_2;
    QPushButton *complete;
    QWidget *widget;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_5;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(918, 1000);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(918, 1000));
        MainWindow->setMaximumSize(QSize(900, 900));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("appicon")));
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(18);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(93, 22, 166);"));

        horizontalLayout_2->addWidget(label_4);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(10, 10));
        pushButton->setMaximumSize(QSize(30, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 0));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 184, 1);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setMargin(5);

        horizontalLayout->addWidget(label_3);

        alg_comboBox = new QComboBox(frame);
        alg_comboBox->setObjectName(QString::fromUtf8("alg_comboBox"));
        sizePolicy1.setHeightForWidth(alg_comboBox->sizePolicy().hasHeightForWidth());
        alg_comboBox->setSizePolicy(sizePolicy1);
        alg_comboBox->setMinimumSize(QSize(0, 30));
        alg_comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 197, 232);\n"
"selection-background-color: rgb(93, 22, 166);"));
        alg_comboBox->setMaxVisibleItems(15);

        horizontalLayout->addWidget(alg_comboBox);

        startButton = new QPushButton(frame);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        sizePolicy1.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy1);
        startButton->setMinimumSize(QSize(0, 30));
        startButton->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 197, 232);"));

        horizontalLayout->addWidget(startButton);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setMargin(5);

        horizontalLayout->addWidget(label_2);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        sizePolicy1.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy1);
        spinBox->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setPointSize(7);
        spinBox->setFont(font2);
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 197, 232);\n"
"selection-background-color: rgb(93, 22, 166);"));
        spinBox->setAccelerated(true);
        spinBox->setMinimum(0);
        spinBox->setMaximum(10000);
        spinBox->setValue(10);

        horizontalLayout->addWidget(spinBox);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 25));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(5);

        horizontalLayout->addWidget(label);

        spinBox_2 = new QSpinBox(frame);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        sizePolicy1.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy1);
        spinBox_2->setMinimumSize(QSize(0, 30));
        spinBox_2->setFont(font2);
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 197, 232);\n"
"selection-background-color: rgb(93, 22, 166);"));
        spinBox_2->setAccelerated(true);
        spinBox_2->setMinimum(2);
        spinBox_2->setMaximum(900);
        spinBox_2->setValue(50);

        horizontalLayout->addWidget(spinBox_2);

        complete = new QPushButton(frame);
        complete->setObjectName(QString::fromUtf8("complete"));
        complete->setEnabled(false);
        sizePolicy1.setHeightForWidth(complete->sizePolicy().hasHeightForWidth());
        complete->setSizePolicy(sizePolicy1);
        complete->setMinimumSize(QSize(0, 30));
        complete->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 197, 232);"));

        horizontalLayout->addWidget(complete);


        verticalLayout->addWidget(frame);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(900, 900));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(30, 30, 831, 741));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 197, 232);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(12);
        font3.setUnderline(true);
        label_6->setFont(font3);

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
#if QT_CONFIG(shortcut)
        label_3->setBuddy(alg_comboBox);
        label_2->setBuddy(spinBox);
        label->setBuddy(spinBox_2);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Algorithm Visualizer", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "The Algorithm Visualizer!", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Pick an Algorithm:", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Delay:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Array Size:", nullptr));
        complete->setText(QCoreApplication::translate("MainWindow", "Complete", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Algorithm Info", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Bubble sort: Goes through list and swaps the highest adjacent elements.\n"
"\n"
"Pancake sort: Pancake are the data points and a spatula can be inserted at any point in the stack and used to \n"
"flip all pancakes above it.\n"
"\n"
"Insertion sort: Moves through adjacent elements in the array and insert element to the correct position if \n"
"the element is out of place.\n"
"\n"
"Brick sort: A variation of bubble-sort. The algorithm runs until the array elements are sorted and in each \n"
"iteration two phases occurs- Odd and Even Phases.\n"
"\n"
"Selection sort: Finds the smallest element in the array and swaps it to the sorted section.\n"
"\n"
"Radix sort: An integer sorting algorithm that sorts data with integer keys by grouping the keys by individual \n"
"digits that share the same significant position and value.\n"
"\n"
"Gnome sort: Based on the concept of a Garden Gnome sorting his flower pots. Look at previous and next data. \n"
"If they are in correct order move to next data point, or else swap data an"
                        "d move to previous data point.\n"
"\n"
"Quick sort: It picks an element as pivot and partitions the given array around the picked pivot.\n"
"\n"
"Cocktail sort: Similar to bubble sort but traverse and swaps in both directions alternatively instead of just \n"
"one way.\n"
"\n"
"Comb sort: Comb Sort improves on Bubble Sort by using gap of size more than 1. The gap starts with a large \n"
"value and shrinks by a factor of 1.3 in every iteration until it reaches the value 1.\n"
"\n"
"Stooge sort: A recursive sorting algorithm. If value at index 0 is greater than value at last index, swap them.\n"
"Recursively sorts the initial and last 2/3rds of the array.\n"
"\n"
"Merge sort: It divides the input array into two halves, calls itself for the two halves, and then merges the \n"
"two sorted halves.\n"
"\n"
"Dijkstra's algorithm: Finds the shortest path from a starting node to a target node in a weighted graph by \n"
"creating a tree of shortest paths from the starting vertex, the source, to all other points in the g"
                        "raph.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
