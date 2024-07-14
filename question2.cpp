// Write a in C++ program to find the size of fundamental data types.
#include <iostream>
using namespace std;

int main()
{
  cout << "The size of ( int ) : "    << sizeof(int) <<endl;
  cout << "The size of ( short ) : "  << sizeof(short) << endl;
  cout << "The size of ( char ) : "   << sizeof(char) << endl;
  cout << "The size of ( bool ) : "   << sizeof(bool) << endl;
  cout << "The size of ( float ) : "  << sizeof(float) << endl;
  cout << "The size of ( double ) : " << sizeof(double) << endl;
  cout << "The size of ( long ) : "   << sizeof(long) << endl;
  cout << "The size of ( long long ): " << sizeof(long long ) << endl;
  cout << "The size of ( long double): " << sizeof(long double) << endl;

  return 0;
}