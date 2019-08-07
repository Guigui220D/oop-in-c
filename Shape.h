typedef struct
{
    void (*destruct)(void*);

    float (*getArea)(void*);

    float multiplier;
} Shape;

