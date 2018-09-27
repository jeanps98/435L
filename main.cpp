#include <QApplication>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <game1scene.h>

int main(int argc, char **argv){
QApplication app (argc, argv);

//commentAdded

QGraphicsView * view = new QGraphicsView();

game1scene *scene1 = new game1scene;

view->setHorizontalScrollBarPolicy((Qt::ScrollBarAlwaysOff));
view->setVerticalScrollBarPolicy((Qt::ScrollBarAlwaysOff));
view->setScene(scene1);
view->setFixedSize(910,512);
view->show();

return app.exec();}
