#include <iostream>
using namespace std;

class Geeks
{

public:
  string geekname;
  int id;

  Geeks(string name, int x)
  {
    this->geekname = name;
    this->id = x;
  }
  // Option-A for declaring a function in class
  void printname()
  {
    cout << "Geekname is: " << this->geekname;
  }

  void printId();

  // Destructors
  ~Geeks()
  {
    cout << "Destructor called for id: " << this->id << endl;
  }
};

// Option-B for declaring a function in class
void Geeks::printId()
{
  cout << "Geek id is: " << this->id;
}

int main()
{
  Geeks obj1("Geek1", 1);
  int i;

  obj1.printname();
  cout << endl;

  obj1.printId();
  while (i < 5)
  {
    Geeks obj2("Geek" + to_string(i), i);
    obj2.id = i;
    i++;
  }
  return 0;
}