#include "myitem.h"

#include <QPainter>

MyItem::MyItem(QGraphicsItem *parent) : QGraphicsItem(parent)
{

}

void MyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QBrush color1(Qt::yellow);
    QBrush color2(Qt::red);
    if(press) {
        painter->fillRect(boundingRect(),color1);
    }
    else {
        painter->fillRect(boundingRect(),color2);
    }
}

QRectF MyItem::boundingRect() const
{
    return QRectF(150,150,40,40);
}
void MyItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    press = true;

}

void MyItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    press = false;
}
