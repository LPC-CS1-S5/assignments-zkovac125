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
  while(ifs.read((char *)&g, sizeof(g))){
    printstruct(g);
  }
}
void pritnstruct(Grade g)
{
  cout << "Name: " << g.first << g.last << "\t" << "SSN: " << g.ssn << "\n";
  coutn<< "t\Scores: ";
  for(int i=0; i<N; i++)
    cout << showpoint << setpercision(2) << g/socre.sc[i] << "\t";
      cout << "Grade " << g.socre.grade << endl;
}