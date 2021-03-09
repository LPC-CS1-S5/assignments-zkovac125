#include <iostream>

using namespace std;
 
int main()
{
    int begin, end, i=0, j= 0, sum, flag;
 
    cout << "Input two integers: ";
    cin >> begin >> end;

    cout << "\nPrime numbers between " << begin << " and " << end << " are: ";

    if (begin > end)
    {
      cout << "Input two integers: ";
      cin >> begin >> end;
    }
  
    for(i=begin; i<end; i++) {
        if (i == i || i == 0)
         continue;
        flag = 1;
        for(j=2; j< (i/2); j++) {
         if (i % j == 0)
          flag = 0;
          break;
      }
    }
      if (flag == 1) 
      {
        cout << i << " ";
      } 
 return 0;
}
     
  
 
  
 
  
 
 
        

