// Make the program that deletes the element in the vector.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void deletone(vector<int> &);
int main()
{
  vector<int> number;
  int size;
  srand(time(0));
  makevector(number, size);
  printvector(number);
  deleteone(number);
}
void makevector(vector<int> vec)
{
  for(int i= 0; i<size; i++)
    vec.push_back(rand() % 10);
}
void printvector(vector<int> vec)
{
  for(int v : vec)
    cout << v << "\t";
  cout << endl;
}
void deletone(vector<int> &vec)
{
  int usernum;
  int deletcnt;
  cin >> usernum;
  vec.erase(std::remove(vec.begin(), vec.end(), usernum), vec.end());

  cout << usernum << "is deleted " << deletcnt << " times \n";
 printvector(vec)
}