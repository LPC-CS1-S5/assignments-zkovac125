#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void getRandNum(int &n1, int &n2, int &n3);
int findMin(int n1, int n2, int n3);
void printResult(int n1, int n2, int n3, int min);

const int N = 3;
int main()
{
  int rdnum;
  srand(time(0));
  for (int i = 0; i < N; i++) {
   rdnum = getRdnum(n1, n2, n3);
   cout << " The random number are : "<< n1 << n2 << n3 << endl;
  if (findMin(rdnum)); {
    min = findMin(n1, n2, n3);                    
                }
  
  printResult(n1, n2, n3, min);
}
void getRandnum(int n1, int n2, int n3){
  //In this function, generate three random numbers and assign the values to the parameter n1, n2, and n3
   rand() % 100 + 1 = n1;
   rand() % 100 + 1 = n2;
   rand() % 100 + 1 = n3;
   return n1;
   return n2;
   return n3;
}
int  findMin(int n1, int n2, int n3){
  static int prec_num = 0;
        if (prec_num == 0) {
                prec_num = n;
                return 0;
        }
        if (prec_num < n) {
                prec_num = n;
                return 1;
        } else {
                prec_num = n;
                return 0;
        }
  return

}
void printResult(int n1, int n2, int n3, int min)
{
 cout << "the random number are: " << n1 << n2 << n3 endl;
 cout << "The minium number is: " << min << endl;
}
