#include <iostream>
using namespace std;

// concept of default constructor

class construct
{
public:
  int a, b;

  construct()
  {
    a = 10;
    b = 20;
  }
};

// concept of parameterized constructor

class Point
{
private:
  int x, y;

public:
  // Parameterized Constructor
  Point(int x1, int y1)
  {
    x = x1;
    y = y1;
  }

  int getX()
  {
    return x;
  }
  int getY()
  {
    return y;
  }
};

int main()
{
  construct c;
  cout << "a: " << c.a << endl
       << "b: " << c.b;

  Point p1(10, 15);

  cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
  return 1;
}
