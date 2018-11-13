#ifndef RECTAGLE_H
#define RECTAGLE_H
#include "Polygon.h"

class Rectagle:public Polygon
{
    public:
        Rectagle(int x,int y):Polygon(x,y){}
        int area();
};

#endif // RECTAGLE_H
