#include "Circle.h"

#include <stdlib.h>

void* Circle__construct(float radius)
{
    Circle* circle = malloc(sizeof(Circle));
    //Functions
    circle->getArea = &Circle__getArea;
    circle->destruct = &Circle__destruct;
    //Variables
    circle->multiplier = 1.f;
    circle->radius = radius;

    return (void*)circle;
}

void Circle__destruct(void* _this)
{
    Circle* __this = (Circle*)_this;
    free(__this);
}

float Circle__getArea(void* _this)
{
    Circle* __this = (Circle*)_this;

    return (__this->radius * __this->radius) * 3.141592f * __this->multiplier;
}
