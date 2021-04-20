//Goal: Find the nth largest number in any array//

#include <iostream>
#include <ctime> // needed to use random
#include <cstdlib>
#include <iomanip>

using namespace std;

int   makearray(int []);
void  bubble (int [], int);
void  printout(int [], int);

const int SIZE = 100;

int main()
{
  int number[SIZE];


  
  int last;

  last = makearray(number);
  printout(number, last);
  for(int i=0; i<last; i++)
    bubble(number, last);
  printout(number, last);
}
int makearray(int number[])
{
    int last;
    srand(time(NULL));
    do{ last = rand() % 20; 
    }while(last < 10); //creates rand num from 10-20//
    for(int i=0; i<last; i++) //starts at 0, checks if it is < the last and then + it.//*
       number[i] = rand() % 100; // values in the array //
    return last; // returns the random numbers and the number of elements to the main function //
}
void bubble(int number[], int last)
{
  for(int i=0; i<last-1; i++) //for all pair of the adjacent two values//
     if( number[i] > number[i+1] ) //if the left item is greater than the right item//
       swap(number[i], number[i+1] ); //swap the values//   
}
void printout(int number[], int last)
{
  for(int i=0; i<last; i++) //gets array in proper format
    cout << setw(5) << number;
  cout << endl;
}