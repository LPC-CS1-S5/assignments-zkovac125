#include <iostream>
using namespace std;

int main()
{ 
  const double W02 = 1.10;
  const double W06 = 2.20;
  const double W10 = 3.70;
  const double W20 = 4.80;
  double rate, weight, distance;
  double total_Price;

  cout "Enter the weight in kilograms: " << endl;
   cin>> weight;
  cout "Enter the distance in miles: " << endl;
   cin>> distance;
  
  if ((weight < 0) || (weight > 20))
    exit (0);
  
  if (weight <= 2)
    rate = W02;
  else if (weight < 6)
    rate = W06;
  else if (weight < 10)
    rate = W10;
  else if (weight < 20)
    rate = W20;
  
  if ((distance 20) || (distance 3000))
    exit (0);
  if (distance > 500)
  total_Price = distance / 500 + rate;
  cout << "Total proce is: $" << total_Price << endl;
  cout << "Weight: " << weight << "Kilograms" << endl;
  cout << "Distance: " << distance << "miles" << endl;
}