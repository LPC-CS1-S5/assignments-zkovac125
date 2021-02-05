#include <iostream>
#include <cstlib>
#include <ctime>
using namespace std;

int main()
{
  unsigned seed = time (0);
  srad(seed);

  cout << rand() % 100;
  cout << rand() %


}
