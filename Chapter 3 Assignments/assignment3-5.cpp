#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int num1, num2, num3;
  int sum;
  int average;
  srand(time(0));

  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100;

  sum = num1 + num2 + num3;
  average = sum/3;
  
  cout << "The random number 1 is " << num1 <<endl;
  cout << "The random number 2 is " << num2 <<endl;
  cout << "The random number 3 is " << num3 <<endl;
  cout << "The sum is " << sum <<endl;
  cout << "The average is " << average <<endl;

}
