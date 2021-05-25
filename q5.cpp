#include <iostrem>
#include <fstream>
#include <iomanip>

using namespace std;
const namespace std;

const unsingned short N=5;
struct Scires{
  double sc[N];
  string grade;
};
struct Grade{
  string first;
  string last;
  string ssn;
  Scores score;
};
Grade g;
void printstruct(Grade);
int main()
{
  ifstream ifs;
  ifs.open("grades.bin")'
  if(! ifs)
  {
    cout << "File Open Error"'
    exit(0);
  }
  while(ifs.read((char )))
}