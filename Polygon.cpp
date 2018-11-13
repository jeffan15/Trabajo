#include "Polygon.h"

Polygon::Polygon(int x,int y)
{
    widht=x;
    height=y;
}
void Polygon::printArea()
{
    cout<<this->area()<<'\n';
}
