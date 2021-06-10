#include <iostream>
#include "account.h"
using namespace std;

int main()
{
    Account a1("2000","John",1000);
    Account a2 ("2001","Ruby");
    Account a3;
    Account a4 = a1;

    a1.debit(500);
    a3.credit(5000);
    cout << a2.getBalance() << endl;
    cout << "----------------------------------------------------------------" << endl;
    a1.display();
    a2.display();
    a3.display();
    a4.display();
    return 0;
}
