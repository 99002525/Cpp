#include <iostream>
#include "ip.h"

using namespace std;

int main()
{
    IPAddress ip1;
    IPAddress ip2(127,0,0,1);
    IPAddress ip3(192,156,1,0);
    IPAddress ip4(165,10,20,30);
    IPAddress ip5(226,5,5,5);

    cout << ip1.isLoopBack() << endl;
    cout << ip2.isLoopBack() << endl;

    cout << ip1.getIPClass() << endl;
    cout << ip2.getIPClass() << endl;
    cout << ip3.getIPClass() << endl;
    cout << ip4.getIPClass() << endl;
    cout << ip5.getIPClass() << endl;

    ip1.dispay();
    ip2.dispay();
    ip3.dispay();
    ip4.dispay();
    ip5.dispay();
    return 0;
}
