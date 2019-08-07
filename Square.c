#include "Square.h"

#include <stdlib.h>

void* Square__construct(float side_lenght)
{
    Square* square = malloc(sizeof(Square));
    //Functions
    square->getArea = &Square__getArea;
    square->destruct = &Square__destruct;
    //Variables
    square->multiplier = 1.f;
    square->side_lenght = side_lenght;

    return (void*)square;
}

void Square__destruct(void* _this)
{
    Square* __this = (Square*)_this;
    free(__this);
}

float Square__getArea(void* _this)
{
    Square* __this = (Square*)_this;

    return __this->side_lenght * __this->side_lenght * __this->multiplier;
}
