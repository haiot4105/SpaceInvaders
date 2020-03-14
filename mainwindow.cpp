#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->resize(700, 600);
    area = new Paintarea();
    this->layout()->addWidget(area);

    timer = new QTimer();

    connect(timer, SIGNAL(timeout()), this, SLOT(UpdateScreen()));
    timer->setInterval(17);
    timer->start();
    timer->setSingleShot(false);
    x = 0;
    y = 100;
}

MainWindow::~MainWindow()
{

}


void MainWindow::UpdateScreen()
{
    area->SetUserPosition(x, y);
    area->update();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key::Key_Left)
    {
        x -= 10;
    }
    if(event->key() == Qt::Key::Key_Right)
    {
        x += 10;
    }
}
