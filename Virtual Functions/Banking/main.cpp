#include <iostream>
#include "banking.h"

using namespace std;

int main()
{
    //AccountBase A1;
    //AccountBase A2("9865","Raju",1000);
    //AccountBase A3("5642", "Pinky");
    //AccountBase A4 = A3;
    //A1.dispay();
    //A2.dispay();
    //A3.dispay();
    //A4.dispay();
    SavingsAccount S1;
    SavingsAccount S2("2918", "Mahesh", 50);
    SavingsAccount S3("2111", "Mona");
    AccountBase *sp = &S2;
    sp->credit(50);
    sp->debit(20);
    sp->dispay();
    CreditAccount C1;
    CreditAccount C2("0212", "CreditManu", 100);
    CreditAccount C3("0331", "CreditRaghu");
    AccountBase &cp = C2;
    cp.credit(500);
    cp.debit(100);
    cp.dispay();
    std::cout<< "Balance of customer 2 :" << C3.getBalance() << std::endl;
    return 0;
}
