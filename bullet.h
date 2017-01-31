#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include "fighter.h"
class Bullet : public QGraphicsRectItem
{
public:
    Bullet(int x,int y,int width,int height);
    Bullet(Fighter* shooter);
};

#endif // BULLET_H
