#include "gameobject.h"

#ifndef INVADER_H
#define INVADER_H

enum Direction
{
    left, right, down
};

class Invader
{
public:
    Invader();
    void Move();
    void SetDir(Direction d);
private:
    Direction curr;

};

#endif // INVADER_H
