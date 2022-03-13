#include <iostream>
using namespace std;

int main()
{
  int a;
  string s;

  // Enter input from user -
  // 4 for example
  cout << "Enter an integer \n";
  cin >> a;

  // Discards the input buffer and
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  // Get input from user -
  // GeeksforGeeks for example
  cout << "Enter a string \n";
  getline(cin, s);

  // Prints 4 and GeeksforGeeks :
  // will execute print a and s
  cout << a << endl;
  cout << s << endl;

  return 0;
}