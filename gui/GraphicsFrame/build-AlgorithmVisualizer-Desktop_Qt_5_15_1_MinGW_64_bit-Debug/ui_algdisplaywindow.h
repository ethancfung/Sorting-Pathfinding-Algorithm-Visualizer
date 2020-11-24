/********************************************************************************
** Form generated from reading UI file 'algdisplaywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALGDISPLAYWINDOW_H
#define UI_ALGDISPLAYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AlgDisplayWindow
{
public:

    void setupUi(QDialog *AlgDisplayWindow)
    {
        if (AlgDisplayWindow->objectName().isEmpty())
            AlgDisplayWindow->setObjectName(QString::fromUtf8("AlgDisplayWindow"));
        AlgDisplayWindow->resize(400, 300);

        retranslateUi(AlgDisplayWindow);

        QMetaObject::connectSlotsByName(AlgDisplayWindow);
    } // setupUi

    void retranslateUi(QDialog *AlgDisplayWindow)
    {
        AlgDisplayWindow->setWindowTitle(QCoreApplication::translate("AlgDisplayWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlgDisplayWindow: public Ui_AlgDisplayWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGDISPLAYWINDOW_H
