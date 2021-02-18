#include <iostream>
using namespace std;

int main()
{
  int num1, num2;

  cout << "Enter two integers \n";
    cin >> num1;
    cin >> num2;

  if (num1 > num2)
  cout << "The minimum integer is " << num2 << "." << endl;
   else 
   cout << "The minimum integer is " << num1 << "." << endl;
}