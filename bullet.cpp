#include "bullet.h"
#include <QDebug>
Bullet::Bullet(int x, int y, int width, int height)
{
    setRect(x,y,width,height);

}

Bullet::Bullet(Fighter *shooter)
{
    qDebug() << "bullet out!";
    setRect(shooter->x(),shooter->y(),5,8);
//    shooter->scene()->addItem(this);
}
