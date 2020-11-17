#ifndef ALGDISPLAYWINDOW_H
#define ALGDISPLAYWINDOW_H

#include <QDialog>

namespace Ui {
class AlgDisplayWindow;
}

class AlgDisplayWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AlgDisplayWindow(QWidget *parent = nullptr);
    ~AlgDisplayWindow();

private:
    Ui::AlgDisplayWindow *ui;
};

#endif // ALGDISPLAYWINDOW_H
