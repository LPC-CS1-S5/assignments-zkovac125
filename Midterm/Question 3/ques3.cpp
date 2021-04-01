#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

//Open file;
//Open status check;
//loop ( N times ) {
     //call the getRdnum();
     //if ( isGreater(num) )  // call the isGreater to check the generated number is greater than the preceding number
             //writes the number to the file
int main()
{
  ofstream ofs;

  int n=10;
  int rdnum;
  double current;
  int static previous;

  current = time(0);
  srand(time(0));

  ofs.open("number.text");
  if (ofs.fail())
  {
     cerr << "File Open Error";
     exit(0);
  }
int getRdum(void);
{
  int n;
  rdnum = rand() % 50;
  ofs << rdnum << endl;
}
int isGreater(int n);
{
  int pre
  if(isGreater > previous)
  {
    ofs << current << endl;
    ofs.close();
    break;
  }
}    