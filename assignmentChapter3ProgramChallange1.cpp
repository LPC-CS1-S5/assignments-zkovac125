#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
const int classA =15;
const int classB =12;
const int classC =9;
int ticketA, ticketB, ticketC;
double cost;

cout << "Enter number of tickets sold\n";
  cin >> ticketA >> ticketB >> ticketC;

cost = ticketA * classA + ticketB * classB + ticketC *classC;

cout << setprecision(3) << "$" << cost << endl;
return 0;
}