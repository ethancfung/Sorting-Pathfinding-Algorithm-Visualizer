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
    QLabel *label_3;
    QComboBox *alg_comboBox;
    QPushButton *startButton;
    QSpinBox *spinBox;
    QPushButton *setDelay;
    QLabel *label;
    QSpinBox *spinBox_2;
    QPushButton *complete;
    QWidget *widget;
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
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 131, 236);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_3);

        alg_comboBox = new QComboBox(centralWidget);
        alg_comboBox->setObjectName(QString::fromUtf8("alg_comboBox"));
        sizePolicy1.setHeightForWidth(alg_comboBox->sizePolicy().hasHeightForWidth());
        alg_comboBox->setSizePolicy(sizePolicy1);
        alg_comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 184, 1);"));
        alg_comboBox->setMaxVisibleItems(15);

        horizontalLayout_2->addWidget(alg_comboBox);

        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        sizePolicy1.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy1);
        startButton->setStyleSheet(QString::fromUtf8("background-color: rgb(241, 135, 1);"));

        horizontalLayout_2->addWidget(startButton);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        sizePolicy1.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(7);
        spinBox->setFont(font);
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 184, 1);"));
        spinBox->setAccelerated(true);
        spinBox->setMinimum(0);
        spinBox->setMaximum(10000);
        spinBox->setValue(10);

        horizontalLayout_2->addWidget(spinBox);

        setDelay = new QPushButton(centralWidget);
        setDelay->setObjectName(QString::fromUtf8("setDelay"));
        sizePolicy1.setHeightForWidth(setDelay->sizePolicy().hasHeightForWidth());
        setDelay->setSizePolicy(sizePolicy1);
        setDelay->setFont(font);
        setDelay->setStyleSheet(QString::fromUtf8("background-color: rgb(241, 135, 1);"));

        horizontalLayout_2->addWidget(setDelay);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(16777215, 15));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        sizePolicy1.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy1);
        spinBox_2->setFont(font);
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 184, 1);"));
        spinBox_2->setAccelerated(true);
        spinBox_2->setMinimum(2);
        spinBox_2->setMaximum(900);
        spinBox_2->setValue(50);

        horizontalLayout_2->addWidget(spinBox_2);

        complete = new QPushButton(centralWidget);
        complete->setObjectName(QString::fromUtf8("complete"));
        complete->setEnabled(false);
        sizePolicy1.setHeightForWidth(complete->sizePolicy().hasHeightForWidth());
        complete->setSizePolicy(sizePolicy1);
        complete->setStyleSheet(QString::fromUtf8("background-color: rgb(241, 135, 1);"));

        horizontalLayout_2->addWidget(complete);


        verticalLayout->addLayout(horizontalLayout_2);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(900, 900));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
