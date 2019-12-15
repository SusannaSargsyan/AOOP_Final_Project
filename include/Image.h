#ifndef IMAGE_H
#define IMAGE_H

#include "Point.h"
#include <list>


class Image
{
    public:
        Image(list<Point> 2D_Array);
        std::list<Point> 2D_Image;
        std::list<Point> get_2D_Image();
        virtual ~Image();

    private:
};

#endif // IMAGE_H
