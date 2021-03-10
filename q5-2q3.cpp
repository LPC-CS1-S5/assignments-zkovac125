#include <iostream>

using namespace std;
int main()
{
  int checkPrimeNumber (int);
  int num, begin, end, i, flag;
  cout << "Input two intergers: ";
  cin >> begin >> end;
  num = begin;

  cout << "Prime numbers are between " << num << " and " << end << " are: ";

  for(int i = num+1; i < end; ++i ) 
  {
    flag = checkPrimeNumber (i);
  if (flag)
   cout << i << " ";
  }
}
int checkPrimeNumber(int n){
   bool isPrime = true;
   if  (n == 0 || n== 1){
     isPrime = false;
   }
   else{
     for (int j = 2; j <= n/2; ++j){
       if (n%j == 0){
         isPrime = false;
         break;
       }
       
     }
     return isPrime;
   }
}
