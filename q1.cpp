#include <iostream>

using namespace std;

int num1;
int num2;
char ch1, ch2;
int f1;
int f2;

void swapTwoValues(int &,int &);
void swapTwoFloatValues(float &,float &);

int main()
{
  //test if the user values are integer or int num1 
  cout << "Enter the two numbers" << endl;
  cin >> num1 >> num2 >> endl;
  num1 = ch1;
  num2 = ch2;
  cin.get(ch1);
  if(ch1== '.'){
    ch1 = f1;
    swapTwoFloatValues(f1,f2);
    cout << "The new first number is: " << f1 << endl;
  }else{
    ch1= n1;
    swapTwoValues(n1,n2);
    cout << "The new first number is: " << n2 << endl;
  }
  cin.get(ch2);
  if(ch2== '.'){
    ch2 = f2;
    swapTwoFloatValues(f1,f2);
    cout << "The new second numbers is: " << tnp << endl;
  }else{
    ch2 = n2;
    swapTwoValues(n1,n2);
    cout << "The second numbers is: " << tnp << endl;
  }
  return 0;
}
void swapTwoValues(int n1, int n2)
{
  int tnp;
  tnp = n1;
  n1 = n2;
  n2 = tnp;
  retun n2;
  return n1;
}
void swapTwoFloatValues(float f1, float f2)
{
  int tnp;
  tnp = f1;
  f1 = f2;
  f2 = tnp;
  return f1;
  return f2;
}