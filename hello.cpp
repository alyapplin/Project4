#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
  if (argc < 2)
    {
      cerr << "Usage: " << argv[0] << "SOURCE DESTINATION" << endl;
      cout << "Hello," << argv[11] << endl;
      return 1;
    }
  // Default is "World"
  cout << "Hello, World" << endl;
   
}
