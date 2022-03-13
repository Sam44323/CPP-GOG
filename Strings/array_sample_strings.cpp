#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

void using_pointers(string &line)
{
  // Initialize array of pointer
  const char *colour[4] = {"Blue", "Red",
                           "Orange", "Yellow"};

  for (int i = 0; i < 4; i++)
    std::cout << colour[i] << "\n";

  cout << line << endl;
}

/*
This method is useful when the length of all strings is known and a particular memory footprint is desired. Space for strings will be allocated in a single block
*/

void using_2d(string &line)
{
  char colour[4][10] = {"Blue", "Red", "Orange",
                        "Yellow"};

  // Printing Strings stored in 2D array
  for (int i = 0; i < 4; i++)
    std::cout << colour[i] << "\n";

  cout << line << endl;
}

/*
The STL string class may be used to create an array of mutable strings. In this method, the size of the string is not fixed, and the strings can be changed.
*/

void using_string_class(string &line)
{
  std::string colour[4] = {"Blue", "Red",
                           "Orange", "Yellow"};

  // Print Strings
  for (int i = 0; i < 4; i++)
    std::cout << colour[i] << "\n";

  cout << line << endl;
}

/*
The STL container Vector can be used to dynamically allocate an array that can vary in size.
*/

void using_vectors(string &line)
{
  std::vector<std::string> colour{"Blue", "Red", "Orange"};

  // Strings can be added at any time with push_back
  colour.push_back("Yellow");

  // Print Strings stored in Vector
  for (int i = 0; i < colour.size(); i++)
    std::cout << colour[i] << "\n";

  cout << line << endl;
}

void array_class(string &line)
{
  std::array<std::string, 4> colour{"Blue", "Red", "Orange",
                                    "Yellow"};

  // Printing Strings stored in array
  for (int i = 0; i < 4; i++)
    std::cout << colour[i] << "\n";

  cout << line << endl;
}

int main()
{
  string line(80, '-');
  using_pointers(line);
  using_2d(line);
  using_string_class(line);
  using_vectors(line);
  array_class(line);
  return 0;
}