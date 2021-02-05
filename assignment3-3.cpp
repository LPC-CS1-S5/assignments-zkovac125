#include <iostream>
using namespace std;

int main()
{ 
  double celcius, fahrenheit;

  cout << "Enter the tempature by Celcius\n";

  cin >> celcius;

  fahrenheit = 9/5.0 * celcius + 32;

  cout << "Celcius " << celcius << "is " << fahrenheit << "Fahrenheit\n";
  cout << setprecision(3)
}