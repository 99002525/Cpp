#include <iostream>
#include "customer.h"
using namespace std;

int main()
{
    PrepaidCustomer pre1("TS1", "Manjesh","9900225566",200);
    PostpaidCustomer post1("TS2", "Murali", "7755664433", 0, 30);
    CustomerBase *prec, *postc;
    prec = &pre1;
    postc = &post1;
    prec->makeCall(100);
    prec->dispay();
    prec->credit(10);
    prec->dispay();
    postc->credit(50);
    postc->dispay();
    postc->makeCall(100);
    postc->dispay();
    return 0;
}
