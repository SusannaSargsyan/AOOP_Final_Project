#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point(int x, int y, int v);
        virtual ~Point();
        int get_x();
        int get_y();
        int get_value();
        void set_x(int x);
        void set_y(int y);
        void set_value(int v);

    private:
        int m_x;
        int m_y;
        int m_value;

};

#endif // POINT_H
