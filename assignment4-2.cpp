#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int num1, num2, num3;
  int min, other, max;

  cout<<"Enter three intgers: "<< endl;
    cin>> num1, num2, num3;

  if ( num1 > num2 ) {
  }
    else if ( num2 > num3 )
    {
    max = num2;
    }
  if ( num3 > num1 )
    {
    max = num3;
    other = num1;
    min = num2;
    }
    else if(num3 < num2)
      {
      max = num1;
      other = num2;
      min = num3;
      }
  if (num1 > num3)
      {
      max = num1;
      }
       else if (num3 > num2)
  if (num1 < num2)
      {
      max = num3;
      other = num2;
      min = num1;
      }
  if (num2 > num3)
      {
      other = num2;
      min = num3;
      }
      else if (num3 > num2)
        {
        max = num1;
        other = num3;
        min = num2;
        }

  cout<< "The numbers in order from smallest to largest are: " << min <<","<< other << "," << max << endl;
}