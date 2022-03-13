#include <iostream>
using namespace std;

class ClassA
{
public:
  int a;
};

class ClassB : virtual public ClassA
{
public:
  int b;
};

class ClassC : virtual public ClassA // we are using virtual so that we don't have ambiguity and have only single copy for the class that's been used elsewhere
{
public:
  int c;
};

class ClassD : public ClassB, public ClassC
{
public:
  int d;
};

int main()
{
  ClassD obj;

  obj.a = 10;  // Statement 3
  obj.a = 100; // Statement 4

  obj.b = 80;
  obj.c = 30;
  obj.d = 40;

  cout << "\n a : " << obj.a;
  cout << "\n b : " << obj.b;
  cout << "\n c : " << obj.c;
  cout << "\n d : " << obj.d << '\n';
}
