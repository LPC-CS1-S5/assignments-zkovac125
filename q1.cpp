//Find the element where the difference between adjacent eements is less then 10
#include <iostream>
#include <cmath>
using namespace std;

const int N = 10;
void checkcond (a, n);

int main()
{
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

  checkcond(int num[], i);
  return 0;
}
void checkcond(int arr[], int N)
{
  for(int i=0; i<N; i++)
   if(abs(N[i] - N[i + 1]) < 10);
    cout << "Less than 10\n";
}