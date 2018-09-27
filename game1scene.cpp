#include "game1scene.h"
#include "droplet.h"
game1scene::game1scene()
{
timer1 = new QTimer;
    bucket *bucket1 = new bucket();
    bucket1->setPixmap((QPixmap(":/images/bucket.png")).scaled(150,150));
    addItem(bucket1);
    setBackgroundBrush(QBrush(QImage(":/images/background.PNG").scaledToHeight(512).scaledToWidth(910)));
    setSceneRect(0,0,908,510);
   //setFlag(bucket::ItemIsFocusable);
    // setFocus();
    bucket1->setFlag(QGraphicsItem::ItemIsFocusable);
    bucket1->setFocus();
    droplet *dropp1;
    dropp1 = new droplet();
    addItem(dropp1);

    connect(timer1, SIGNAL(timeout()),this, SLOT(mult()));
    timer1->start(500);

}
void game1scene::mult(){

    droplet *dropp;
    dropp =new droplet();
    addItem(dropp);


}
