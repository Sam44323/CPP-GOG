#include <iostream>
using namespace std;

// function overloading polymorphism
class Geeks
{
public:
  void func(int x)
  {
    cout << "value of x is " << x << endl;
  }

  void func(double x)
  {
    cout << "value of x is " << x << endl;
  }

  void func(int x, int y)
  {
    cout << "value of x and y is " << x << ", " << y << endl;
  }
};

// class based polymorphism i.e inheritance

class base
{
public:
  virtual void print()
  {
    cout << "print base class" << endl;
  }

  void show()
  {
    cout << "show base class" << endl;
  }
};

class derived : public base
{
public:
  void print()
  {
    cout << "print derived class" << endl;
  }

  void show()
  {
    cout << "show derived class" << endl;
  }
};

int main()
{

  Geeks obj1;

  obj1.func(7);

  obj1.func(9.132);

  obj1.func(85, 64);

  base *bptr;
  derived d;
  bptr = &d;

  bptr->print();

  bptr->show();
  return 0;
}
