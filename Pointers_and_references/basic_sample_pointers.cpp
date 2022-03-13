#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  int x = 10, *ptr, *i, var[4] = {1, 2, 3, 4};

  ptr = &x;

  cout << "Value of x is: " << *ptr << endl;
  for (i = var; i <= var + 3; i++)
  {
    cout << "Value of i is: " << *i << endl;
  }

  return 0;
}
