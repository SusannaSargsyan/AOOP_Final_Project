#include "Point.h"

Point::Point()
{
    //ctor
}

Point::~Point()
{
    //dtor
}

 int Point::get_x()
 {
    return m_x;
 }

 int Point::get_y()
 {
    return m_y;
 }

 int Point::get_value()
 {
    return m_value;
 }

 void Point::set_x(int x)
 {
    m_x=x;
 }

 void Point::set_y(int y)
 {
    m_y=y;
 }

 void Point::set_value(int v)
 {
    m_value=v;
 }
