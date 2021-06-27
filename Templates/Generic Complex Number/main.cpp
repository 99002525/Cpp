#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    Complex<int> C1(10,20);
    Complex<int> C2;
    Complex<double> C3(5.2,6.3);
    C1.display();
    C2.display();
    C3.display();
    return 0;
}
