#ifndef IMGPROCESSOR_H
#define IMGPROCESSOR_H
#include "Image.h"
#include "Point.h"
#include "Box.h"


class ImgProcessor
{
    public:
        ImgProcessor(Image i);
        virtual ~ImgProcessor();
        Image m_image;
        Box m_box;
        Box get_Box();
        int moment(int i, int j, int v);
        Point* centroid(int v);
        void central_Box(int v);
        double orientation(int v);
        double eccentricity(int v);








};

#endif // IMGPROCESSOR_H
