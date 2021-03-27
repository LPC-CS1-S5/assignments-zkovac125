#include <iostream>
using namespace std;

void primenum(int, int);

int main()
{
  int i, begin, end, num;
  int prim_num;
  cout << "Enter the beginning number in the range: " << endl;
  cin >> begin; 
  cout << "Enter the last number in the range" << endl;
  cin >> end;
  cout << "the prime numbers in the range: " << begin << " and " <<  end << " are: " << endl;

  primenum(begin, end);
} 
  
void primenum (int i , int end)

{
  int num;

  for (num = 2; num <= end; num++)
  {
    for (i = 2; i <= (num/2); i++)
    {
      if (num % i == 0)
      {
        i = num;
        break;
      }
    }
    if (i != num)
    {
      cout << num << " ";
    }
  }
}