#include "gameobject.h"
#include "bullet.h"

#ifndef GAMER_H
#define GAMER_H


class Gamer : public GameObject
{
    public:
        Gamer();
        Bullet Shoot();
        void MoveLeft();
        void MoveRight();

    protected:


};

#endif // GAMER_H
