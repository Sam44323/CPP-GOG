#include <iostream>
using namespace std;

template <typename T, int n>
void findSize(T (&arr)[n])
{
  cout << "Size of the arrays is: " << sizeof(T) * n << " for type of: " << typeid(T).name() << endl;
}

int main()
{
  int a[10];
  findSize(a);

  float f[20];
  findSize(f);
  return 0;
}