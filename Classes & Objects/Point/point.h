#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
enum Quadrant {
  Q1 = 1,
  Q2,
  Q3,
  Q4
};

class Point {
  int m_x;
  int m_y;
  public:
  Point();
  Point(int,int);
  Point(const Point&);
  double distanceFromOrigin()  const;
  Quadrant quadrant() const;
  bool isOrigin() const;
  bool isOnXAxis() const;
  bool isOnYAxis() const;
  void display() const;
};
#endif // POINT_H_INCLUDED
