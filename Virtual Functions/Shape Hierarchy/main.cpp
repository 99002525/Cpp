#include <iostream>
#include"shape.h"
using namespace std;

int main()
{
    Circle C1(10);
//    Polygon P1(3);
    Rectangle R1(3,5,4);
    Triangle T1(3,4,5,3);
    IShape *c, *t, *r;
    c = &C1;
    cout<< "Area of circle :" << c->area() << endl;
    cout<< "Circumference of circle :" << c->circumference() << endl;
    t = &T1;
    cout<< "Area of Traingle :" << t->area() << endl;
    cout<< "Circumference of Triangle :" << t->circumference() << endl;
    r = &R1;
    cout<< "Area of Rectangle :" << r->area() << endl;
    cout<< "Circumference of Rectangle :" << r->circumference() << endl;
    return 0;
}
