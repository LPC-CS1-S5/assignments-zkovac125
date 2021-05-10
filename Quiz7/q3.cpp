// Make the program that finds the greatest number in the first half and the second half in the array.
#include <iostream>
#include <iomanip>
using namespace std;

void findMax(int num[], int);

int main()
{
  const int N =10;
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
  
  // Call Funtion
  findMax(number, N);

  return 0;
}
void findMax(int number[], int N)
{
   int from =0;
   int to =0;

   for(int i =0; i < N; i++){
     //finds greatest elemets of the first half
     if(i < N / 2)
      from = number[i];
     // finds the greatest element in tbe second half
     else 
      to = number[i];
   }
   cout << "Greates element in the first half is " << from << endl;
   cout << "Greatest element in the second half is " << to << endl;
}