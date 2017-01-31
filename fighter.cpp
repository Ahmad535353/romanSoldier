#include "fighter.h"
#include "bullet.h"
#include <QGraphicsScene>
#include <QDebug>
Fighter::Fighter()
{
    this->setRect(375,520,50,80);
    this->setFlag(QGraphicsItem::ItemIsFocusable);
    this->setFocus();
}
//Bullet* Fighter::shoot()
//{
//    qDebug() << "shoot";
//    Bullet* bullet = new Bullet(this);
////    Bullet* bullet = new Bullet(this->x(),this->y(),5,10);
//}
void Fighter::keyPressEvent(QKeyEvent* event)
{
    int k = event->key();
    qDebug() << "key";
    if (k == Qt::Key_Left){
        this->setPos(this->x()-10,this->y());
    }
    else if(k == Qt::Key_Right){
        this->setPos(this->x()+10,this->y());
    }
//    else if(k == Qt::Key_Space){
//        qDebug() << "space";

////        shoot();
//    }
//    else{
//        qDebug() << "other key";
//    }
}

