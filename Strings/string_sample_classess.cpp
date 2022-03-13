#include <iostream>
#include <string>
using namespace std;

void basic_operations(string &str, string &line)
{

  str.push_back('!');

  cout << "The string after push_back operation: \n";
  cout << str << endl;

  str.pop_back();

  cout << "The string after pop_back operation: \n";
  cout << str << endl;
  cout << line << endl;
}

void capacity_functions(string &str, string &line)
{
  // Displaying string
  cout << "The initial string is : ";
  cout << str << endl;

  // Resizing string using resize()
  str.resize(18);

  // Displaying string
  cout << "The string after resize operation is : ";
  cout << str << endl;

  // Displaying capacity of string
  cout << "The capacity of string is : ";
  cout << str.capacity() << endl;

  // Displaying length of the string
  cout << "The length of the string is :" << str.length()
       << endl;

  // Decreasing the capacity of string
  // using shrink_to_fit()
  str.shrink_to_fit();

  // Displaying string
  cout << "The new capacity after shrinking is : ";
  cout << str.capacity() << endl;

  cout << line << endl;
}

void iterator_functions(string &str, string &line)
{
  // Declaring iterator
  std::string::iterator it;

  // Declaring reverse iterator
  std::string::reverse_iterator it1;

  // Displaying string
  cout << "The string using forward iterators is : ";
  for (it = str.begin(); it != str.end(); it++)
    cout << *it;
  cout << endl;

  // Displaying reverse string
  cout << "The reverse string using reverse iterators is "
          ": ";
  for (it1 = str.rbegin(); it1 != str.rend(); it1++)
    cout << *it1;
  cout << "\n"
       << line << endl;
}

void manipulating_functions()
{
  string str1 = "geeksforgeeks is for geeks";

  // Declaring 2nd string
  string str2 = "geeksforgeeks rocks";

  // Declaring character array
  char ch[80];

  // using copy() to copy elements into char array
  // copies "geeksforgeeks"
  str1.copy(ch, 13, 0);

  // Displaying char array
  cout << "The new copied character array is : ";
  cout << ch << endl;

  // Displaying strings before swapping
  cout << "The 1st string before swapping is : ";
  cout << str1 << endl;
  cout << "The 2nd string before swapping is : ";
  cout << str2 << endl;

  // using swap() to swap string content
  str1.swap(str2);

  // Displaying strings after swapping
  cout << "The 1st string after swapping is : ";
  cout << str1 << endl;
  cout << "The 2nd string after swapping is : ";
  cout << str2 << endl;
}

int main()
{
  string str, line(80, '-');

  cout << "Enter a string: \n";
  getline(cin, str);

  basic_operations(str, line);
  capacity_functions(str, line);
  iterator_functions(str, line);
  manipulating_functions();

  return 0;
}