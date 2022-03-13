#include <iostream>
using namespace std;

class String
{
private:
  char *s;
  int size;

public:
  String(char *);
  ~String()
  {
    delete[] s;
    cout << "Deleting the object \n";
  }

  void get()
  {
    cout << this->s << endl;
  }
};

String::String(char *c)
{
  size = strlen(c);
  s = new char[size + 1];
  strcpy(s, c);
}

int main()
{
  int i = 0;
  while (i < 5)
  {
    char b[] = "Hello";
    String *s = new String(&b[0]);
    s->get();
    i++;
  }
  return 0;
}