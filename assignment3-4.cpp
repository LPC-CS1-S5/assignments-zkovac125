#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  char n1,n2,n3;
  double r1,r2,r3;
  double avg;
  
  cout << "Enter the first month and amount of\n";
  cout << "rainfall in inches; " << endl;
  cin >> n1 >> r1;
  
  cout << "Enter the second month and amount of\n";
  cout << "rainfall in inches; " << endl;
  cin >> n2 >> r2;
  
  cout << "Enter the third month and amount of\n";
  cout << "rain in inches; " << endl;
  cin >> n3 >> r3;

  avg = (r1+r2+r3)/3.0;

  cout << "The average rainfall in the months of " << n1 << "," << n2 << "," << n3 << " is " << avg << endl;
  }