#include <stdio.h>
#include <stdlib.h>

#include "Shape.h"
#include "Circle.h"
#include "Square.h"

int main()
{
    //Construct
    Shape* shape = Square__construct(12.f);

    printf("Shape as a square : \n");
    printf("Shape area : %f\n", shape->getArea(shape));
    ((Square*)shape)->side_lenght = 5.f;
    printf("Shape area : %f\n", shape->getArea(shape));
    shape->multiplier = 2.f;
    printf("Shape area : %f\n", shape->getArea(shape));

    shape->destruct(shape);

    shape = Circle__construct(3.f);

    printf("\nShape as a circle : \n");
    printf("Shape area : %f\n", shape->getArea(shape));
    shape->multiplier = 3.f;
    printf("Shape area : %f\n", shape->getArea(shape));
    ((Circle*)shape)->radius = 6.5f;
    printf("Shape area : %f\n", shape->getArea(shape));

    shape->destruct(shape);

    return 0;
}
