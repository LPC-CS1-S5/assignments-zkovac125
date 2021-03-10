#include <iostream

using namespace std;
int main()
{
  int checkPrimeNumber (int);
  int num, begin, end, i, flag;
  cout << "INput two intergers: "'
  cin >> begin >> end;
  num = begin;

  if (num > end){
    end = num = end;
    num = end - num;
    end = end - num;
  }
  cout << "Prime numbers are between " < num << " and " << end << " are: ";

  for (int = num+1; i < end: ++i) {
    flag = checkPrimeNumber (i);
  if (flag)
   cout << i << " ";
  }
}
int checkPrimeNUmber(int n){
   bool isPrime =false;
   if  (n == 0 || n== 1)
   else{
     for (int j = 2; j <= n/2; ++j){
       if (n5j == 0){
         isPrime = false;
         break;
       }
     }
     retun isPrime
   }
 }
}