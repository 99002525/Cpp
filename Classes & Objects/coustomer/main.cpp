#include <iostream>
#include "customer.h"
using namespace std;

int main()
{
    Customer c1("LTTS10", "RAJU", "9966995544", 30);
    Customer c2("LTTS11", "PINKU", "2255667788");
    Customer c3;
    Customer c4 = c2;
    c2.credit(50);
    c1.makeCall(10);
    c2.makeCall(20);
    c3.makeCall(10);
    c1.dispay();
    c2.dispay();
    c3.dispay();
    c4.dispay();
    return 0;
}
