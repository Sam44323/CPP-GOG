#include <iostream>
using namespace std;

int main()
{
  // an array with 3 rows and 2 columns.
  int x[3][2] = {{0, 1}, {2, 3}, {4, 5}};

  // output each array element's value
  cout << "Elements in the 2-D array are:\n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << "Element at x[" << i
           << "][" << j << "]: ";
      cout << x[i][j] << endl;
    }
  }

  cout << "Elements in the 3-D array are:\n";

  int y[2][3][2] =
      {
          {{0, 1}, {2, 3}, {4, 5}},
          {{6, 7}, {8, 9}, {10, 11}}};

  // output each element's value
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 2; ++k)
      {
        cout << "Element at x[" << i << "][" << j
             << "][" << k << "] = " << y[i][j][k]
             << endl;
      }
    }
  }

  return 0;
}