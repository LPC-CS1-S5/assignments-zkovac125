#inlcude <iostream>
#include <iomanip>
using namespace std;

int findcross(int [][10]);
bool checkup(int [][10], int, int);
bool checkdown(int [][10], int, int);
bool checkleft (int [][10], int, int);
bool checkright (int [][10], int, int);
bool printout (int [][10], int);

int main()
{
  int cnt=0;
  int maze[10][10] =       { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 
              0, 0, 0, 1, 1, 1, 0, 0, 0, 0,
                             0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
                             0, 1, 0, 0, 1, 0, 0, 0, 0, 0,
                             1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
                             0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
                             0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
                             0, 1, 0, 0, 1, 0, 1, 1, 0, 0,
                             0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
                             0, 1, 0, 0, 1, 1, 1, 0, 0, 0 }
}