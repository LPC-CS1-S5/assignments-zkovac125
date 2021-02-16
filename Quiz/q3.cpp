#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
  double num1, num2, num3;
  double sum;
  double average;
  srand(time(0));

  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100;

  sum = num1 + num2 + num3;
  average = sum/3;

  cout << "The random number is " << fixed << std::setprecision (5) << num1 << endl;
  cout << "The random number is " << fixed << std::setprecision (5) << num2 << endl;
  cout << "The random number is " << std::setprecision(5) << num3 << endl;
  cout << "The sum is " << fixed << std::setprecision(5) << sum << endl;
  cout << "The average is " << fixed << std::setprecision(5) << average << endl;

}