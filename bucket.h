#ifndef BUCKET_H
#define BUCKET_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
class bucket : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit bucket(QObject *parent = nullptr);
    void keyPressEvent(QKeyEvent *event);
    //QKeyEvent *event;


signals:

public slots:
};

#endif // BUCKET_H
