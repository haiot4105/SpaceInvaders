#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

struct Point
{
    int x;
    int y;
};

enum Shape
{
    circle, rectangle, triangle
};

class GameObject
{
    public:
        GameObject();
        Point GetPosition();
        void SetPosition(Point pos);
        bool isAlive();
        void Kill();
        void SetSpeed(int sp);
        int GetSpeed();


    protected:
        Point position;
        bool alive;
        Shape type;
        int speed;

};

#endif // GAMEOBJECT_H
