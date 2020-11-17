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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_5;
    QLabel *label_4;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_3;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_8;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(678, 488);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 54, 71);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(66, 154, 170);"));

        verticalLayout->addWidget(label);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButton_5 = new QRadioButton(groupBox_3);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        gridLayout->addWidget(radioButton_5, 4, 0, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 1, 1, 1, 1);

        radioButton_6 = new QRadioButton(groupBox_3);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        gridLayout->addWidget(radioButton_6, 7, 0, 1, 1);

        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout->addWidget(radioButton_3, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        radioButton = new QRadioButton(groupBox_3);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 1, 0, 1, 1);

        radioButton_7 = new QRadioButton(groupBox_3);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        gridLayout->addWidget(radioButton_7, 2, 1, 1, 1);

        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout->addWidget(radioButton_4, 3, 0, 1, 1);

        radioButton_8 = new QRadioButton(groupBox_3);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        gridLayout->addWidget(radioButton_8, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 194, 149);"));

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Interactive Algorithm Visualizer", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Algorithm Visualizer!", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Pick an Algorithm", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "Bubble Sort", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Path Finding:", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Dijkstra's", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "Bogo", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Shell Sort", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sorting:", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Quick Sort", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "Breadth First", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Merge Sort", nullptr));
        radioButton_8->setText(QCoreApplication::translate("MainWindow", "Depth First", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Visualize!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
