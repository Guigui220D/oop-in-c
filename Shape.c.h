//Shape
{
    void (*destruct)(void*);

    float (*getArea)(void*);

    float multiplier;

/*
This function is purely virtual
It shouldnt have a closing } because it has to be continued in classes that "inherit" it
You need to add that first bit of code in the classes that should inherit this, using "include"
*/

