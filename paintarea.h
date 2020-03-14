#ifndef PAINTAREA_H
#define PAINTAREA_H

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QPaintEvent>


class Paintarea : public QWidget
{
    Q_OBJECT
public:
    explicit Paintarea(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event) override;
    void SetUserPosition(int x, int y);
private:

    void DrawUser();

    QPainter *painter;
    QPen *pen;
    QBrush *brush;

    int Ux, Uy;

signals:

public slots:
};

#endif // PAINTAREA_H
