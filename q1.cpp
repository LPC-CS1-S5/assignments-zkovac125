#include <iostream>
#include <string>

using namespace std;

int n1;
int n2;
char ch1, ch2;
int f1;    
int f2;

void swapTwoValues(int &,int &);
void swapTwoFloatValues(float,float);

int main()
{
  //test if the user values are integer or int num1 
  cout << "Enter the two numbers" << endl;
  cin >> ch1 >> ch2 >> endl;
  num1 = ch1;
  num2 = ch2;
  cin.get(ch1,ch2);
  if((ch1== '.')&&(ch2== '.')){
    ch1 = f1;
    ch2 = f2;
    swapTwoFloatValues(f1,f2);
    cout << "The new order of number are: " << f1 << f2 << endl;
  }else{
    ch1 = n1;
    ch2 =n2;
    swapTwoValues(n1,n2);
    cout << "The new order of numbers are: " << n1 << n2 << endl;
  }
  
  return 0;
}
void swapTwoValues(int n1, int n2)
{
  int tnp;
  tnp = n1;
  n1 = n2;
  n2 = tnp;
}
void swapTwoFloatValues(float f1, float f2)
{
  int tnp;
  tnp = f1;
  f1 = f2;
  f2 = tnp;
}