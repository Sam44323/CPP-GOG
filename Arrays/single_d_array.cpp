
#include <iostream>
using namespace std;

int main()
{
  int arr[5];
  arr[0] = 5;
  arr[2] = -10;

  // this is same as arr[1] = 2
  arr[3 / 2] = 2;
  arr[3] = arr[0];

  cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
       << arr[3];

  cout << "Size of integer in this compiler is "
       << sizeof(int) << "\n";

  for (int i = 0; i < 5; i++)
    // The use of '&' before a variable name, yields
    // address of variable.
    cout << "Address arr[" << i << "] is " << &arr[i]
         << "\n";

  // replacing index-of-out bound error with a gibberish value
  printf("%d ", arr[10]);
  printf("%d ", arr[-2]);

  return 0;
}