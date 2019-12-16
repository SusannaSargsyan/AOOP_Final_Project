#include <iostream>

using namespace std;

int main()
{
    std::list<Point> Array; // should be initialized
    Image image(Array);
    ImgProcessor IP(image);
    Point* p = IP.centroid(5);
    IP.central_Box(5);
    Box B = IP.get_Box();
    B.shift(10,10);
    B.resize(10);
    double OR = orientation(5);
    double E = eccentricity(5);

    return 0;

}
