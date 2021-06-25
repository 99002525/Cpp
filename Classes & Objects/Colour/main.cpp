#include <iostream>
#include "colour.h"
using namespace std;

int main()
{
    Color c1;
    Color c2(75,165,225);
    Color c3(1092797);
    Color c4("ABCD10");
    Color c5(BLUE);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    c3.invert();
    c4.invert();
    c3.display();
    c4.display();
    return 0;
}
