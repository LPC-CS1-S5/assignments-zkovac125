#include <iostream>

using namespace std;

const int N=5, M=5;
int i;
int j;

int main()
{
  for (i=1; i<N; i++)
  {
   for (j=i; j<M-i; j++)
     cout << " (" << i << "," << j << ")";
    cout << endl;
  }
}