#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
  ofstream ofs;
  int N=10, i;
  int rdnum;
  double previous=0, current;

  //unsigned seed = time(0);
  //srand(time(0));
  //static previous =0;
 //if (previous > N)
  ofs.open("number.text");
  if (ofs.fail())
  {
     cerr << "File Open Error";
     exit(0);
  }
  //if ()
  for(int i = 0; i < N; i++)
  {
    rdnum = rand() % 50;
    ofs << rdnum << endl;
    break;
  }
    
 ofs.close();
}