#ifndef POLYGON_H
#define POLYGON_H


class Polygon
{
    public:
        Polygon(int,int);
        virtual int area()=0;
        void printArea();
    protected:
        int widht, height;
};

#endif // POLYGON_H
