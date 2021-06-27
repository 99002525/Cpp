#include <iostream>
#include"genstack.h"

using namespace std;

int main()
{
  MyStack<int> s1(10);
  s1.push(10);
  s1.push(20);
  s1.push(30);
  cout << s1.pop() << endl;
  MyStack<double> s2(8);
  s2.push(1.1);
  s2.push(2.2);
  cout << s2.pop() << endl;
  s2.peek();
  return 0;
}
