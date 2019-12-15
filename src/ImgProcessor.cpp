#include "ImgProcessor.h"
#include <math.h>
#include <list>


ImgProcessor::ImgProcessor(Image img)
{
    m_image = i;
    m_box = Box(0,0,0);
}

int ImgProcessor::moment(int i, int j, int v)
{
    int sum = 0;
    std::list<Point>::iterator b;
    for(b=img.get_2D_Image().begin(); b!=img.get_2D_Image().end(); b++)
    {
        if(b->get_value() == v)
        {
            int px=pow(b->get_x(),i);
            int py=pow(b->get_y(),j);
            sum += px*py;
        }
    }
    return sum;

}

Box ImgProcessor::get_Box()
{
    return m_box;
}


Point* ImgProcessor::centroid(int v)
{
    int m00 = moment(0, 0, v);
    int m01 = moment(0, 1, v);
    int m10 = moment(1, 0, v);


    int x0 = m10/m00;
    int y0 = m01/m00;
    return new Point(x0, y0);

}

void ImgProcessor::central_Box(int v)
{
       int count = 0;
		int sum_x = 0;
		int sum_y = 0;
		Point centroid_point = centroid(v);
		int centroid_x = centroid_point.get_x();
		int centroid_y = centroid_point.get_y();

        std::list<Point>::iterator b;
        for(b=img.get_2D_Image().begin(); b!=img.get_2D_Image().end(); b++)
        {
            Point p = *b;
	 		if(p.get_value() == v)
	 		{
	 			sum_x = sum_x + pow(p.get_x() - centroid_x,2);
	 			sum_y = sum_y + pow(p.get_y() - centroid_y,2);
	 			count++;
	 		}
	 	}
	 	int sigma_x = sum_x/count;
	 	int sigma_y = sum_y/count;
        m_box = Box(centroid_point.get_x() - sigma_x, centroid_point.get_y() - sigma_y,
                    centroid_point.get_x() + sigma_x, centroid_point.get_y() + sigma_y,
                    m_image);



}

double ImgProcessor::orientation(int v)
{
    int m11 = moment(1, 1, v);
    int m02 = moment(0, 2, v);
    int m20 = moment(2, 0, v);
    double or = 0.5 * (1/tan(2*m11/(m20 - m02)));

    return or;
}

double ImgProcessor::eccentricity(int v)
{
    int m11 = moment(1, 1, v);
    int m02 = moment(0, 2, v);
    int m20 = moment(2, 0, v);
    double e = (pow((m20 - m02),2) + 4* pow(m11,2))/ pow((m20 + m02),2);

    return e;
}


ImgProcessor::~ImgProcessor()
{
    //dtor
}
