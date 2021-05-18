// Chapter 11. Structured Data.
#include <iostream>
using namespace std;

int main()
{
	const int N=3;
	struct Student
	{
		string sname;
		string Id;
		int scores[N];
		int TotalScore;
		int Avg;
	}  ;
  
  student s1;
  student s2;

  if(s1 == s2)

  cout << "Enter student name: ";
  cin >> s.sname;
  cout << "Enter ID: ";
  cin >> s.Id;
  s.TotalScore = 0;
  for(int i=0; i<N; i++){
	  cin >> s.scores[i];
    s.TotalScore += s.scores[i];
  }
  s.Avg = s.TotalScore/ N;
  



	
}