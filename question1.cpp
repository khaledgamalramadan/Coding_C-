// Write a program in C++ to print the sum of two numbers.
#include <iostream>
using namespace std;

int main()
{
  int number1 ,number2, sum=0;
  cout << "Enter the first number : ";
  cin >> number1;
  cout << "Enter the second number : ";
  cin >> number2;

  sum = number1 + number2;
  cout << "The sum of two numbers is : " << sum << endl;

  return 0;
}
