
//Inherits shape
typedef struct
#include "Shape.c.h"
    float radius;
} Circle;

void* Circle__construct(float radius);

//PRIVATE
void Circle__destruct(void* _this);

float Circle__getArea(void* _this);
