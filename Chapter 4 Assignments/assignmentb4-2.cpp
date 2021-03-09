#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int num1, num2, num3;
  int min;
  int other;
  int max;

  cout<<"Enter three intgers: " << endl;
    cin>> num1, num2, num3;

  if ((num1 > num2)&&(num2 > num3))
       max = num2;
       other = num1;
       min = num1;

     else if ((num1 > num3)&&(num2 > num3))
      {
       max = num2;
       other = num3;
       min = num1;
      }
  if (num1 > num3) {
       else if (num2 < num3)
          {
            max = num3;
            other = num1;
            min = num2;
          }
       else if(num2 > num3)
      {
       max = num3;
       other = num2;
       min = num1;
      }
 }
  if (num2 > num3)
    }
    else 
    {
     max = num1;
     other = num2;
     min = num3;
    }
      else (num2 < num3)
        max = num1;
        other = num3;
        min = num2;
    }
cout << "The numbers in order are: " << min << "," << other << "," << max << endl;
}