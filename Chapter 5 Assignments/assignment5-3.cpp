#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
  ofstream ofs;
  int N;
  int rdnum;
  double sum, average, min, max;

  unsigned seed = time(0);
  srand(time(0));

  cout << "Enter the number of random numbers :";
  cin >> N;
  ofs.open("data.txt");
  if (ofs.fail())
  {
     cerr << "File Open Error";
     exit(0);
  }
  
  for(int i = 0; i < N; i++)
  {
    rdnum = rand() % 100;
    ofs << rdnum << endl;
   }
    sum += rdnum;
    cout << "Sum: " << sum << endl;
    average = sum/N;
    cout << "Average: " << average << endl;
    if (ofs.fail()) 
    {
       cout << rdnum << " has written into the file\n";
    }
 ofs.close();
}