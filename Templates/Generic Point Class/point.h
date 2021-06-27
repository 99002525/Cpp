#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>
#include <cmath>
enum Quadrant {
  Q1 =1,
  Q2,
  Q3,
  Q4
};


template<typename T> class Point {
  T m_x;
  T m_y;
  public:
  Point();
  Point(T,T);
  double distanceFromOrigin() const;
  Quadrant quadrant();
  void display() const;
};

template<typename T> Point<T> :: Point() : m_x(0), m_y(0) { }
template<typename T> Point<T> :: Point(T x, T y) : m_x(x), m_y(y) { }

template<typename T> double Point<T>::distanceFromOrigin() const {
return sqrt((m_x*m_x) + (m_y*m_y));
}

template<typename T> Quadrant Point<T>::quadrant() {
if(m_x>=0 && m_y >=0)
    return Q1;
else if(m_x<0 && m_y>0)
    return Q2;
else if(m_x<0 && m_y<0)
    return Q3;
else if(m_x>0 && m_y<0)
    return Q4;
}

template<typename T> void Point<T>::display() const{
std::cout << "X =" << m_x << std::endl;
std::cout << "Y =" << m_y << std::endl;
}

#endif // POINT_H_INCLUDED
