#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#define PI 22.0/7
#include<math.h>
class IShape {
  public:
  virtual double area()=0;
  virtual double circumference()=0;
};
class Polygon:public IShape {
  int m_sides;
  public:
  Polygon(int n);   //no.of sides
};
class Circle : public IShape {
  double m_radius;
public:
//  const static double PI = 22.0/7.0;
  Circle(int r);
  virtual double area(){ return (PI * m_radius * m_radius); }
  virtual double circumference() { return (2*PI*m_radius);}
};

class Rectangle : public Polygon {
  int  m_length;
  int  m_breadth;
public:
  Rectangle(int l,int b,int sides);
  virtual double area(){ return m_length*m_breadth; }
  virtual double circumference() { return 2*(m_length*m_breadth); }
};
class Triangle : public Polygon {
  int  m_a;
  int  m_b;
  int  m_c;
public:
  Triangle(int x,int y,int z, int sides);
  virtual double area()
  {
      double s;
      s= (m_a + m_b + m_c)/2;
      return sqrt(s*(s-m_a)*(s-m_b)*(s-m_c));
  }
  virtual double circumference() { return m_a + m_b + m_c; }
};
#endif // SHAPE_H_INCLUDED
