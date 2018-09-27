#include "bucket.h"


bucket::bucket(QObject *parent) : QObject(parent)
{
//event = new QKeyEvent();

    setPos(400,365);

}
void bucket::keyPressEvent(QKeyEvent *event){

if((event->key() == Qt::Key_Right)&&(x()<860)){

    setPos(x()+2,365);
}

if((event->key()==Qt::Key_Left)&&(x()>50)){

    setPos(x()-2,365);

}

}
