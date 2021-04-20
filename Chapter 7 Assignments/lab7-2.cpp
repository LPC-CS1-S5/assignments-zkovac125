//Masking
//compare two array contents
// if the valuse in "mask array is 1, the value in "number array keeps its value. Otherwise, if the valuse in "mask" array os 0, the value in "number" array will cahnge to 0 //
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int makearray(int []);
void makemask(int [], int last);
void applymask(int [], int [], int);
void printout(int [], int);

const int SIZE = 100;

SLDMlS

int main()
{
  int mask[SIZE];
  int number[SIZE];
  int last;

  last = makearray(number);
  printout(number, last);
  makemask(mask, last);
  printout(mask, last);

  applymask(number, mask, last);
  printout(number, last);
}
int makearray(int number[])
{
  int last;
    srand(time(NULL));
    do{ 
       last = rand() % 20; 
    } while (last < 10); //creates rand num from 10-20//
    for(int i=0; i<last; i++) //starts at 0, checks if it is < the last and then + it.//*
       number[i] = rand() % 100; // values in the array //
    return last; // returns the random numbers and the number of elements to the main function //
}
void makemask(int mask[], int last)
{
  for(int i=0; i<last; i++){
    mask[i] = (rand() % 2)? 1:0;
  }
}
void applymask(int number[], int mask[], int last)
{
  for(int i=0; i<last; i++)
    number[i]=(mask[i]&& number[i])? number[i]:0;
}
void printout(int number[], int last)
{
  for(int i=0; i<last; i++)
    cout << setw(5) << number[i];
  cout << endl;
}