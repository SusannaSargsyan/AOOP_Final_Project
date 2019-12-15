#include "Box.h"

Box::Box(Point t, Point b,Image i){
		m_LT = t;
		m_RB = b;
		m_image = i;
	}
Box::~Box()
{
    //dtor
}

Point Box::get_LT(){
		return m_LT;
	}
Point Box::get_RB(){
		return m_RB;
	}
 void Box::set_LT(Point t){
		m_LT = t;
	}
 void Box::set_RB(Point b){
		m_RB = b;
	}
int Box::get_Length(){
		return get_RB().get_x() - get_LT().get_x() ;
	}
int Box::get_Height(){
		return get_RB().get_y() - get_LT().get_y();
	}

void Box::shift(int x, int y){
		m_LT.set_x(x - get_Length()/2);
		m_LT.set_y(y - get_Height()/2);
		m_RB.set_x(x + get_Length()/2);
		m_RB.set_y(y + get_Height()/2);
	}

void Box::resize(int value){
		m_LT.set_x(m_LT.get_x() - value);
		m_LT.set_y(m_LT.get_y() - value);
		m_RB.set_x(m_RB.get_x() + value);
		m_RB.set_y(m_RB.get_y() + value);
	}
