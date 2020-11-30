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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
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
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *alg_comboBox;
    QPushButton *startButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpinBox *spinBox;
    QPushButton *setDelay;
    QLabel *label;
    QSpinBox *spinBox_2;
    QPushButton *complete;
    QPushButton *stooge;
    QPushButton *merge;
    QPushButton *pancake;
    QPushButton *radix;
    QPushButton *insertion;
    QPushButton *gnome;
    QPushButton *brick;
    QPushButton *bubble;
    QPushButton *quick;
    QPushButton *selection;
    QPushButton *cocktail;
    QPushButton *comb;
    QLabel *label_2;
    QPushButton *dijkstra;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1261, 800);
        MainWindow->setMinimumSize(QSize(1000, 800));
        MainWindow->setMaximumSize(QSize(2000, 1600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_3);

        alg_comboBox = new QComboBox(centralWidget);
        alg_comboBox->setObjectName(QString::fromUtf8("alg_comboBox"));
        alg_comboBox->setMaxVisibleItems(15);

        horizontalLayout_2->addWidget(alg_comboBox);

        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        horizontalLayout_2->addWidget(startButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(700, 700));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(widget, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        sizePolicy1.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(7);
        spinBox->setFont(font);
        spinBox->setAccelerated(true);
        spinBox->setMinimum(0);
        spinBox->setMaximum(10000);
        spinBox->setValue(10);

        verticalLayout->addWidget(spinBox);

        setDelay = new QPushButton(centralWidget);
        setDelay->setObjectName(QString::fromUtf8("setDelay"));
        sizePolicy1.setHeightForWidth(setDelay->sizePolicy().hasHeightForWidth());
        setDelay->setSizePolicy(sizePolicy1);
        setDelay->setFont(font);

        verticalLayout->addWidget(setDelay);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(16777215, 15));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        sizePolicy1.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy1);
        spinBox_2->setFont(font);
        spinBox_2->setAccelerated(true);
        spinBox_2->setMinimum(2);
        spinBox_2->setMaximum(900);
        spinBox_2->setValue(50);

        verticalLayout->addWidget(spinBox_2);

        complete = new QPushButton(centralWidget);
        complete->setObjectName(QString::fromUtf8("complete"));
        sizePolicy1.setHeightForWidth(complete->sizePolicy().hasHeightForWidth());
        complete->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(complete);

        stooge = new QPushButton(centralWidget);
        stooge->setObjectName(QString::fromUtf8("stooge"));
        sizePolicy1.setHeightForWidth(stooge->sizePolicy().hasHeightForWidth());
        stooge->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(stooge);

        merge = new QPushButton(centralWidget);
        merge->setObjectName(QString::fromUtf8("merge"));
        sizePolicy1.setHeightForWidth(merge->sizePolicy().hasHeightForWidth());
        merge->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(merge);

        pancake = new QPushButton(centralWidget);
        pancake->setObjectName(QString::fromUtf8("pancake"));
        sizePolicy1.setHeightForWidth(pancake->sizePolicy().hasHeightForWidth());
        pancake->setSizePolicy(sizePolicy1);
        pancake->setFont(font);

        verticalLayout->addWidget(pancake);

        radix = new QPushButton(centralWidget);
        radix->setObjectName(QString::fromUtf8("radix"));
        sizePolicy1.setHeightForWidth(radix->sizePolicy().hasHeightForWidth());
        radix->setSizePolicy(sizePolicy1);
        radix->setFont(font);

        verticalLayout->addWidget(radix);

        insertion = new QPushButton(centralWidget);
        insertion->setObjectName(QString::fromUtf8("insertion"));
        sizePolicy1.setHeightForWidth(insertion->sizePolicy().hasHeightForWidth());
        insertion->setSizePolicy(sizePolicy1);
        insertion->setFont(font);

        verticalLayout->addWidget(insertion);

        gnome = new QPushButton(centralWidget);
        gnome->setObjectName(QString::fromUtf8("gnome"));
        sizePolicy1.setHeightForWidth(gnome->sizePolicy().hasHeightForWidth());
        gnome->setSizePolicy(sizePolicy1);
        gnome->setFont(font);

        verticalLayout->addWidget(gnome);

        brick = new QPushButton(centralWidget);
        brick->setObjectName(QString::fromUtf8("brick"));
        sizePolicy1.setHeightForWidth(brick->sizePolicy().hasHeightForWidth());
        brick->setSizePolicy(sizePolicy1);
        brick->setFont(font);

        verticalLayout->addWidget(brick);

        bubble = new QPushButton(centralWidget);
        bubble->setObjectName(QString::fromUtf8("bubble"));
        sizePolicy1.setHeightForWidth(bubble->sizePolicy().hasHeightForWidth());
        bubble->setSizePolicy(sizePolicy1);
        bubble->setFont(font);

        verticalLayout->addWidget(bubble);

        quick = new QPushButton(centralWidget);
        quick->setObjectName(QString::fromUtf8("quick"));
        sizePolicy1.setHeightForWidth(quick->sizePolicy().hasHeightForWidth());
        quick->setSizePolicy(sizePolicy1);
        quick->setFont(font);

        verticalLayout->addWidget(quick);

        selection = new QPushButton(centralWidget);
        selection->setObjectName(QString::fromUtf8("selection"));
        sizePolicy1.setHeightForWidth(selection->sizePolicy().hasHeightForWidth());
        selection->setSizePolicy(sizePolicy1);
        selection->setFont(font);

        verticalLayout->addWidget(selection);

        cocktail = new QPushButton(centralWidget);
        cocktail->setObjectName(QString::fromUtf8("cocktail"));
        sizePolicy1.setHeightForWidth(cocktail->sizePolicy().hasHeightForWidth());
        cocktail->setSizePolicy(sizePolicy1);
        cocktail->setFont(font);

        verticalLayout->addWidget(cocktail);

        comb = new QPushButton(centralWidget);
        comb->setObjectName(QString::fromUtf8("comb"));
        sizePolicy1.setHeightForWidth(comb->sizePolicy().hasHeightForWidth());
        comb->setSizePolicy(sizePolicy1);
        comb->setFont(font);

        verticalLayout->addWidget(comb);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(16777215, 15));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        dijkstra = new QPushButton(centralWidget);
        dijkstra->setObjectName(QString::fromUtf8("dijkstra"));
        sizePolicy1.setHeightForWidth(dijkstra->sizePolicy().hasHeightForWidth());
        dijkstra->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(dijkstra);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1261, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
#if QT_CONFIG(shortcut)
        label_3->setBuddy(alg_comboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Algorithm Visualizer", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Pick an Algorithm:", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        setDelay->setText(QCoreApplication::translate("MainWindow", "Set delay", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Array size", nullptr));
        complete->setText(QCoreApplication::translate("MainWindow", "Complete", nullptr));
        stooge->setText(QCoreApplication::translate("MainWindow", "Stooge", nullptr));
        merge->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        pancake->setText(QCoreApplication::translate("MainWindow", "Pancake", nullptr));
        radix->setText(QCoreApplication::translate("MainWindow", "Radix", nullptr));
        insertion->setText(QCoreApplication::translate("MainWindow", "Insertion", nullptr));
        gnome->setText(QCoreApplication::translate("MainWindow", "Gnome", nullptr));
        brick->setText(QCoreApplication::translate("MainWindow", "Odd-Even", nullptr));
        bubble->setText(QCoreApplication::translate("MainWindow", "Bubble", nullptr));
        quick->setText(QCoreApplication::translate("MainWindow", "Quick", nullptr));
        selection->setText(QCoreApplication::translate("MainWindow", "Selection", nullptr));
        cocktail->setText(QCoreApplication::translate("MainWindow", "Cocktail", nullptr));
        comb->setText(QCoreApplication::translate("MainWindow", "Comb", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PathFinding", nullptr));
        dijkstra->setText(QCoreApplication::translate("MainWindow", "Dijkstra's", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
