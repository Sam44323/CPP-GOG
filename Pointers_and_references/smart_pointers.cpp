#include <memory>
#include <iostream>

using namespace std;

class Rectangle
{
  int length;
  int breadth;

public:
  Rectangle(int l, int b)
  {
    length = l;
    breadth = b;
  }

  int area()
  {
    return length * breadth;
  }
};

void using_unique_pointers()
{
  unique_ptr<Rectangle> P1(new Rectangle(10, 9));
  cout << P1->area() << endl;

  unique_ptr<Rectangle> P2;
  P2 = move(P1);

  cout << P2->area() << endl;
}

void using_weak_pointers()
{
  shared_ptr<Rectangle> P1(new Rectangle(10, 5));

  cout << P1->area() << endl;

  shared_ptr<Rectangle> P2;
  P2 = P1;

  cout << P2->area() << endl;

  cout << P1->area() << endl;

  cout << P1.use_count() << endl;
}

int main()
{
  using_unique_pointers();
  using_weak_pointers();
  using_weak_pointers();
  return 0;
}