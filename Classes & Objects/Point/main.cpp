#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    Point p1(0,3);
    Point p2(4,3);
    Point p3 = p1;
    Point p4(4,0);
    Point p5;
    Point p6(-1,2), p7(-1,-1), p8(3,-2);

    cout << "Distance from Origin= "<< p3.distanceFromOrigin() << endl;
    cout << "Distance from Origin= "<< p2.distanceFromOrigin() << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << p5.isOrigin() << endl;
    cout << p3.isOrigin() << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << p1.isOnXAxis() << endl;
    cout << p4.isOnXAxis() << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << p4.isOnXAxis() << endl;
    cout << p1.isOnXAxis() << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Quadrant = Q" << p2.quadrant() << endl;
    cout << "Quadrant = Q" << p6.quadrant() << endl;
    cout << "Quadrant = Q" << p7.quadrant() << endl;
    cout << "Quadrant = Q" << p8.quadrant() << endl;
    cout << "Quadrant = Q" << p5.quadrant() << endl;
    cout << "-------------------------------------------------------------" << endl;
    p7.display();
    p8.display();
	return 0;
}
