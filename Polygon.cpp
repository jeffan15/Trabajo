#include "Polygon.h"

Polygon::Polygon(int x,int y)
{
    widht=x;
    height=y;
}
Polygon::printArea()
{
    cout<<this->area()<<'\n';
}
