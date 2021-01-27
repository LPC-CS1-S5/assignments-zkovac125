//Write a program that stores the following values in five different variables:

//28, 32, 37, 24, and 33.

//The program should first calculate the sum of these five variables and store the result in a separate variable named sum .
//Then, the program should divide the sum variable by 5 to get the average.
//Display the sum and average with precision 3 on the screen.

#include <iostream>
using namespace std;

int main()
{
  double num1 = 28;
  double num2 = 32;
  double num3 = 37;
  double num4 = 24;
  double num5 = 33;
  double sum = num1 + num2 + num3 + num4 + num5;
  double average = sum / 5;
  

  cout << "Sum: " << sum << endl;
  cout << "Average: " << average << endl;
  
}