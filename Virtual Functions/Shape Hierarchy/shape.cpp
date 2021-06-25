#include"shape.h"

Polygon :: Polygon(int n): m_sides{n} { }

Circle :: Circle(int r): m_radius{r} { }

Rectangle :: Rectangle(int l, int b, int sides): m_length{l},m_breadth{b},Polygon{sides} { }

Triangle :: Triangle(int x,int y,int z, int sides) : m_a{x}, m_b{y}, m_c{z}, Polygon{sides} { }
