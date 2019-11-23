#ifndef WIDGET_H
#define WIDGET_H

#include <QGraphicsScene>
#include <QWidget>
#include <QtGui>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QGraphicsScene *scene;


};



#endif // WIDGET_H
