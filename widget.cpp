#include "widget.h"
#include "ui_widget.h"
#include "myitem.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,1200,800);
    scene->setBackgroundBrush(QPixmap("/home/mp7/Pobrane/723.jpg"));
    //powiazanie sceny z widokiem
    ui->graphicsView->setScene(scene);

    QBrush bBlue(Qt::blue);
    QBrush bGreen(Qt::green);
    QPen pen(Qt::black);
    QGraphicsEllipseItem *ellipse = scene->addEllipse(20,20,40,40, pen,bBlue);
    ellipse->setFlag(QGraphicsItem::ItemIsMovable);


    scene->addRect(100,20,40,40,pen,bGreen);

    MyItem *item = new MyItem();
    scene->addItem(item);

}

Widget::~Widget()
{
    delete ui;
}


