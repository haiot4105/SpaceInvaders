#include "paintarea.h"

Paintarea::Paintarea(QWidget *parent) : QWidget(parent)
{
    painter = new QPainter();
    pen = new QPen();
    brush = new QBrush();
    painter->setPen(*pen);
    painter->setBrush(*brush);
}


void Paintarea::SetUserPosition(int x, int y)
{
    Ux = x;
    Uy = y;
}



void Paintarea::paintEvent(QPaintEvent *event)
{

    painter->begin(this);
    DrawUser();

    painter->end();
}

void Paintarea::DrawUser()
{

    pen->setColor(Qt::red);
    brush->setColor(Qt::red);

    painter->drawEllipse(Ux,Uy,10,10);
}
