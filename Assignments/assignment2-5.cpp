//Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge.
//The tax should be 6.75 percent of the meal cost.
//The tip should be 20 percent of the total after adding the tax.
//Display the meal cost, tax amount, tip amount, and total bill on the screen (All amount should be displayed with 2 precision numbers and decimal point.)
//Describe your programming logic as the comments.

#include <iostream>

using namespace std;

int main() 
{

  double meal_price = 88.67;
  float meal_tax_percent = 1.0675: //needs float for the percision. 
  double meal_tip = 0.2;

  double meal_tax = meal_price * meal_tax_percent;
  double meal_tip = meal_tax * meal_tip_percent;
  double meal_total = meal_tip + meal_tax;

  cout << "Meal Cost: $" << meal_price << endl:
  cout << "Tax Amount: $" << meal_tax << endl;
  cout << "Tip Amount: $" << meal_tip << endl;
  cout << "Meal Total: $" << meal_total << endl:

  return 0;
}