#include <iostream>
#include "box.h"
using namespace std;

int main()
{
    Box B1(10,20,30);
    Box B2(5);
    Box B3;
    Box B4 = B1;

    cout << B1.breadth() << endl;
    cout << B2.length() << endl;
    cout << B3.height() << endl;
    cout << "Volume =" << B1.volume() << endl;

    B4.dispay();
    return 0;
}
