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
    QWidget *widget;
    QWidget *horizontalLayoutWidget;
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
    QComboBox *alg_comboBox;
    QPushButton *startButton;
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
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 811, 591));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(860, 70, 171, 537));
        verticalLayout = new QVBoxLayout(horizontalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(horizontalLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(7);
        spinBox->setFont(font);
        spinBox->setAccelerated(true);
        spinBox->setMinimum(0);
        spinBox->setMaximum(10000);
        spinBox->setValue(10);

        verticalLayout->addWidget(spinBox);

        setDelay = new QPushButton(horizontalLayoutWidget);
        setDelay->setObjectName(QString::fromUtf8("setDelay"));
        sizePolicy.setHeightForWidth(setDelay->sizePolicy().hasHeightForWidth());
        setDelay->setSizePolicy(sizePolicy);
        setDelay->setFont(font);

        verticalLayout->addWidget(setDelay);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 15));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        spinBox_2 = new QSpinBox(horizontalLayoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        sizePolicy.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy);
        spinBox_2->setFont(font);
        spinBox_2->setAccelerated(true);
        spinBox_2->setMinimum(2);
        spinBox_2->setMaximum(900);
        spinBox_2->setValue(50);

        verticalLayout->addWidget(spinBox_2);

        complete = new QPushButton(horizontalLayoutWidget);
        complete->setObjectName(QString::fromUtf8("complete"));
        sizePolicy.setHeightForWidth(complete->sizePolicy().hasHeightForWidth());
        complete->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(complete);

        stooge = new QPushButton(horizontalLayoutWidget);
        stooge->setObjectName(QString::fromUtf8("stooge"));
        sizePolicy.setHeightForWidth(stooge->sizePolicy().hasHeightForWidth());
        stooge->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(stooge);

        merge = new QPushButton(horizontalLayoutWidget);
        merge->setObjectName(QString::fromUtf8("merge"));
        sizePolicy.setHeightForWidth(merge->sizePolicy().hasHeightForWidth());
        merge->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(merge);

        pancake = new QPushButton(horizontalLayoutWidget);
        pancake->setObjectName(QString::fromUtf8("pancake"));
        sizePolicy.setHeightForWidth(pancake->sizePolicy().hasHeightForWidth());
        pancake->setSizePolicy(sizePolicy);
        pancake->setFont(font);

        verticalLayout->addWidget(pancake);

        radix = new QPushButton(horizontalLayoutWidget);
        radix->setObjectName(QString::fromUtf8("radix"));
        sizePolicy.setHeightForWidth(radix->sizePolicy().hasHeightForWidth());
        radix->setSizePolicy(sizePolicy);
        radix->setFont(font);

        verticalLayout->addWidget(radix);

        insertion = new QPushButton(horizontalLayoutWidget);
        insertion->setObjectName(QString::fromUtf8("insertion"));
        sizePolicy.setHeightForWidth(insertion->sizePolicy().hasHeightForWidth());
        insertion->setSizePolicy(sizePolicy);
        insertion->setFont(font);

        verticalLayout->addWidget(insertion);

        gnome = new QPushButton(horizontalLayoutWidget);
        gnome->setObjectName(QString::fromUtf8("gnome"));
        sizePolicy.setHeightForWidth(gnome->sizePolicy().hasHeightForWidth());
        gnome->setSizePolicy(sizePolicy);
        gnome->setFont(font);

        verticalLayout->addWidget(gnome);

        brick = new QPushButton(horizontalLayoutWidget);
        brick->setObjectName(QString::fromUtf8("brick"));
        sizePolicy.setHeightForWidth(brick->sizePolicy().hasHeightForWidth());
        brick->setSizePolicy(sizePolicy);
        brick->setFont(font);

        verticalLayout->addWidget(brick);

        bubble = new QPushButton(horizontalLayoutWidget);
        bubble->setObjectName(QString::fromUtf8("bubble"));
        sizePolicy.setHeightForWidth(bubble->sizePolicy().hasHeightForWidth());
        bubble->setSizePolicy(sizePolicy);
        bubble->setFont(font);

        verticalLayout->addWidget(bubble);

        quick = new QPushButton(horizontalLayoutWidget);
        quick->setObjectName(QString::fromUtf8("quick"));
        sizePolicy.setHeightForWidth(quick->sizePolicy().hasHeightForWidth());
        quick->setSizePolicy(sizePolicy);
        quick->setFont(font);

        verticalLayout->addWidget(quick);

        selection = new QPushButton(horizontalLayoutWidget);
        selection->setObjectName(QString::fromUtf8("selection"));
        sizePolicy.setHeightForWidth(selection->sizePolicy().hasHeightForWidth());
        selection->setSizePolicy(sizePolicy);
        selection->setFont(font);

        verticalLayout->addWidget(selection);

        cocktail = new QPushButton(horizontalLayoutWidget);
        cocktail->setObjectName(QString::fromUtf8("cocktail"));
        sizePolicy.setHeightForWidth(cocktail->sizePolicy().hasHeightForWidth());
        cocktail->setSizePolicy(sizePolicy);
        cocktail->setFont(font);

        verticalLayout->addWidget(cocktail);

        comb = new QPushButton(horizontalLayoutWidget);
        comb->setObjectName(QString::fromUtf8("comb"));
        sizePolicy.setHeightForWidth(comb->sizePolicy().hasHeightForWidth());
        comb->setSizePolicy(sizePolicy);
        comb->setFont(font);

        verticalLayout->addWidget(comb);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(16777215, 15));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        dijkstra = new QPushButton(horizontalLayoutWidget);
        dijkstra->setObjectName(QString::fromUtf8("dijkstra"));
        sizePolicy.setHeightForWidth(dijkstra->sizePolicy().hasHeightForWidth());
        dijkstra->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(dijkstra);

        alg_comboBox = new QComboBox(horizontalLayoutWidget);
        alg_comboBox->setObjectName(QString::fromUtf8("alg_comboBox"));

        verticalLayout->addWidget(alg_comboBox);

        startButton = new QPushButton(horizontalLayoutWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        verticalLayout->addWidget(startButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1261, 21));
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
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
