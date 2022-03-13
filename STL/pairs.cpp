#include <iostream>
#include <utility>
using namespace std;

void using_make_pair()
{
  pair<int, char> PAIR1;
  pair<string, double> PAIR2("GeeksForGeeks", 1.23);
  pair<string, double> PAIR3;

  PAIR1.first = 100;
  PAIR1.second = 'G';

  PAIR3 = make_pair("GeeksForGeeks is Best", 4.56);

  cout << PAIR1.first << " ";
  cout << PAIR1.second << endl;

  cout << PAIR2.first << " ";
  cout << PAIR2.second << endl;

  cout << PAIR3.first << " ";
  cout << PAIR3.second << endl;
}

// void using_swap()
// {
//   pair<int, char> PAIR1;
//   pair<string, double> PAIR2("GeeksForGeeks", 1.23);
//   pair<string, double> PAIR3;

//   PAIR1.first = 100;
//   PAIR1.second = 'G';

//   PAIR3 = make_pair("GeeksForGeeks is Best", 4.56);

//   cout << PAIR1.first << " ";
//   cout << PAIR1.second << endl;

//   cout << PAIR2.first << " ";
//   cout << PAIR2.second << endl;

//   cout << PAIR3.first << " ";
//   cout << PAIR3.second << endl;

//   swap(PAIR1, PAIR3);

//   cout << PAIR1.first << " ";
//   cout << PAIR1.second << endl;

//   cout << PAIR2.first << " ";
//   cout << PAIR2.second << endl;

//   cout << PAIR3.first << " ";
//   cout << PAIR3.second << endl;
// }

// void using_tie()
// {
//   pair<int, int> pair1 = {1, 2};
//   int a, b;
//   tie(a, b) = pair1;
//   cout << a << " " << b << "\n";
// }

void using_operators()
{
  pair<int, char> PAIR1;
  pair<string, double> PAIR2("GeeksForGeeks", 1.23);
  PAIR1 = PAIR2;
  if (PAIR1 == PAIR2)
    cout << "Equal\n";
  else
    cout << "Not Equal\n";
}

int main()
{
  pair<string, double> Pair1("GeeksForGeeks", 1.23);

  cout << Pair1.first << " ";
  cout << Pair1.second << endl;

  using_make_pair();
  using_swap();
  using_tie();
  using_operators();

  return 0;
}