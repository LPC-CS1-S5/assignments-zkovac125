#include <iostream>
#include <ctime>

using namespace std;

int static getRdnum(int);
int getRdum(int);
int getRdum(int,int):

int main()
{
  srand(time(0));
  unsigned int output = rand() % 100 +1;
  cout << rand() % 10 + 1<< endl;
}
int getRdum(int n1)
{
  n1;
  return rand() % 100 + 1;
}
int getRdum(int n2)
{
  int n2;
  int num;
  num = rand() % n2 + 1;
}
int getRdum(int n1, int n2)
{
  int n1;
  int n2;
  int num;
  for(num= n1; n1 > n2; n1++){
    num = rand() % n2 - (n1 -n2) +1 + n2;
  }
}

/*
* Unfortunattly I am very confused on what to do to make this code work. I used the parameters listed in the midterm. I made sure to use rand() % 100 =1 to account for all number including 1. In toptal there is four functions. 
/*
