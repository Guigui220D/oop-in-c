
//Inherits shape
typedef struct
#include "Shape.c.h"
    float side_lenght;
} Square;

void* Square__construct(float side_lenght);

//PRIVATE
void Square__destruct(void* _this);

float Square__getArea(void* _this);
