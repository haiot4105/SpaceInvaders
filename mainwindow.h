#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QTimer>
#include "paintarea.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void UpdateScreen();

protected:
    virtual void keyPressEvent(QKeyEvent *event);

private:
    Paintarea *area;
    QTimer *timer;
    int x, y;

};

#endif // MAINWINDOW_H
