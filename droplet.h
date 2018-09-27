#ifndef DROPLET_H
#define DROPLET_H

#include <QTimer>
#include <QObject>
#include <QGraphicsPixmapItem>

class droplet :public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:

   // int  posi;
    QTimer *timer;
    droplet(QObject *parent = nullptr);

public slots:
    void update();


};

#endif // DROPLET_H
