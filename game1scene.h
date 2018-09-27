#ifndef GAME1SCENE_H
#define GAME1SCENE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <bucket.h>

class game1scene : public QGraphicsScene
{
Q_OBJECT

public:
QTimer *timer1;
    bucket *bucket1;
    QGraphicsPixmapItem *bck;

    game1scene();


public slots:
    void mult();
};

#endif // GAME1SCENE_H
