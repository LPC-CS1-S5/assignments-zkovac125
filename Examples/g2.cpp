#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void prime(int, int);

int main() 
{
  int begin, end, i, j;

  do {
    cout << "Please enter two integers from 1 to 100 " << endl;
    cin >> begin >> end;

  }
  while (begin > end);

  prime(begin, end);

  //for (i= begin; i <end; i++{
    //for (j = 2; j < i; j++){
      //if (i % j == 0)
      //break;
    //}
  // if (i==j)
  //cout << i << "is the prime number" << endl;
void prime(int begin, int end)
{
  int prime;
  int i;
  int j;
  for (i= begin; i <end; i++){
    for (j = 2; j < i; j++)
    {
      if (i % j == 0)
      break;
    }
      cout << i << " is the prime number " << endl;
  }
}