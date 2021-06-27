#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point<int> p1(0,3);
    Point<int> p2(4,3);
    Point<int> p3(-1,2);
    Point<int> p4(-1,-1);
    Point<double> p5(3.0,-2.0);
    cout << "Distance from Origin= " << p3.distanceFromOrigin() << endl;
    cout << "Distance from Origin= " << p2.distanceFromOrigin() << endl;
    cout << "Quadrant = Q" << p1.quadrant() << endl;
    cout << "Quadrant = Q" << p2.quadrant() << endl;
    cout << "Quadrant = Q" << p3.quadrant() << endl;
    cout << "Quadrant = Q" << p4.quadrant() << endl;
    cout << "Quadrant = Q" << p5.quadrant() << endl;
    return 0;
}
