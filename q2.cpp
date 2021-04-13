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
  int i;
  int n1, n2, n3, min;
  srand(time(0));
  for (i = 0; i < N; i++) {
   rdnum = getRdnum(n1, n2, n3);
  }
  while (findMin(n1, n2, n3)); {
    min = findMin(n1, n2, n3);                    
  }
  
  printResult(n1, n2, n3, min);
}
void getRandnum(int n1, int n2, int n3){
   n1 = rand() % 100 + 1;
   n2 = rand() % 100 + 1;
   n3 = rand() % 100 + 1;
   return n1;
   return n2;
   return n3;
}
int  findMin(int n1, int n2, int n3, int min){
  static int prec_num = 0;
        
        if (prec_num == 0) {
                prec_num = n1;
                return 0;
        }
        if (prec_num > n) {
                prec_num = n1;
                n1 = min;
        } else {
                prec_num = n1;
                return 0;
        }
        if (prec_num == 0) {
                prec_num = n2;
                return 0;
        }
        if (prec_num > n) {
                prec_num = n2;
                n1 = min;
        } else {
                prec_num = n2;
                return 0;
        }
        if (prec_num == 0) {
                prec_num = n3;
                return 0;
        }
        if (prec_num > n) {
                prec_num = n3;
                n1 = min;
        } else {
                prec_num = n3;
                return 0;
        }

}
void printResult(int n1, int n2, int n3, int min)
{
 cout << "the random number are: " << n1 << n2 << n3 << endl;
 cout << "The minium number is: " << min << endl;
 return;
}
