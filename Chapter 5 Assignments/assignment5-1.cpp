#include <iostream>

using namespace std;

int main()
{
  // variables
  int base, exp;
  int power_Number;
  int i;
  int start, end;

  cout << "Enter the base and power number please: " ;
  cin >> base >> exp;
  //calculates the 2 to the n_th power( n is a negative or positive integer//
  i = 0;
  power_Number = 1;
  while( i < exp )
  {
    power_Number = power_Number * base;
    i++;
  }
  // finds the sequence of 2 to power n in the given range//
  cin >> end;
  power_Number = 1; 
  
  while(power_Number < start ){
    power_Number += 2;
  }
  while( power_Number < end ){
    power_Number = power_Number * 2;
    cout << power_Number;
  }
}








