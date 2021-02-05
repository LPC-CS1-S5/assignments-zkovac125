#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
  double celcius, fahrenheit;

  cout << "Enter the tempature by Celcius\n";

  cin >> celcius;

  fahrenheit = 9/5.0 * celcius + 32;

  cout << celcius << " Celcius" << setprecision(3) << " is " << fahrenheit << setprecision(3) << " Fahrenheit\n";
  
}