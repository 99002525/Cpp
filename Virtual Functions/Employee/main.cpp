#include <iostream>
#include "employee.h"
using namespace std;

int main()
{
    Employee *eng;
    Engineer E1("ABC1", "Sham", 15000.0 , 2, 1234);
    Manager M1("MAN1", "Naresh", 30000.0, 15, 6789, 5);
    Employee &man = M1;
    eng = &E1;
    eng->appraisal();
    eng->payroll();
    eng->display();
    man.appraisal();
    man.payroll();
    man.display();
    return 0;
}
