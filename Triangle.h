#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"

class Triangle
{
    public:
        Triangle(int x,int y):Polygon(x,y){}
        int area();
};

#endif // TRIANGLE_H
