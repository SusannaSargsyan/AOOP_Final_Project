#include "Image.h"


Image::Image(list<Point> 2D_Array)
{
    2D_image.implace(2D_Array);
}



std::list<Point> get_2D_Image()
{
    return 2D_Image;
}

Image::~Image()
{
    //dtor
}
