#include <iostream>
using namespace std;

int main ()
{
  int males; 
  int females;

  int students_total;

  int males = 8;
  int females = 12;

  students_total = males + females;

  cout << "How many males and females in a class \n";
    cin >> males, females;

  float percentMales = males/ students_total;
  float percentFemales = females/ students_total;

  cout << "There are " << percentMales << "and " << percentFemales << endl;

}