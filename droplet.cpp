#include "droplet.h"
#include <QGraphicsScene>
droplet::droplet(QObject *parent) : QObject(parent)
{

    setPixmap((QPixmap(":/images/water.gif")).scaled(30,30));

    timer = new QTimer;
    int poss =  rand() % 910;



    setPos(poss,0);


connect(timer, SIGNAL(timeout()),this, SLOT(update()));

timer->start(500);

}
void droplet::update(){


     setPos(x(),y()+10);
     if((y()>510)||(!(scene()->collidingItems(this).isEmpty()))){
     scene()->removeItem(this);
     delete this;

     }


}
