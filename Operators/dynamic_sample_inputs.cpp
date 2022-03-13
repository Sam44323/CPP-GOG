#include <iostream>
using namespace std;

// dynamic allocation of memory using new and freeing of the same using delete

int main()
{
  int *p = new (nothrow) int(10); // nothrow means no exception is thrown if memory is not available but it returns nullptr
  if (!p)
  {
    cout << "Memory not available" << endl;
    return 0;
  }
  else
  {
    cout << "Memory available:\t" << *p << endl;
  }

  delete p;
  if (p)
  {
    cout << "Pointer is deleted and memory is free-ed" << &p << endl;
  }
  return 0;
}