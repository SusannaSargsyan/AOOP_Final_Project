#ifndef BOX_H
#define BOX_H

#include "Image.h"
#include "Point.h"



class Box
{
    public:
        Box(Point t, Point b, Image i);
        Image m_image;
        Point get_LT();
        Point get_RB();
        int get_Length();
        int get_Height();
        void set_LT();
        void set_RB();
        void shift(int x, int y);
        void resize(int v);


        virtual ~Box();

    private:
        Point m_LT;
        Point m_RB;


};

#endif // BOX_H
