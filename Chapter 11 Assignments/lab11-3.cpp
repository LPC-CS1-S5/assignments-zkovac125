/#include	<iostream>
#include	<fstream>
#include	<string>

using namespace std;

const	int 	NUMCOURSE =2;
struct Score {
  int score[NUMCOURSE];
  int sum;
  int avg;
};
struct Student
{
	int		id;
	string	name;
  Scores screcord;
};

int		makingstructarray(Student []); // return value : the number of struct array
void	printout(Student s);
void	findusername(Student [], int, string);

int 	main()
{
	int	;
	Student	s[N];
	string	username;
  int i;
  
	N = makingstructarray(s);
	cout << "Total number of students records are " << N << endl;
	for(int	 i=0; i<N; i++)
		printout(s[N]);

	cout << "Enter user name to find in Student's records\n";
	cin	>> username;
	findusername(s, N, username);

}
int		makingstructarray(Students s[])
{
  int i;
  ifstream ifs;

  ifs.open ("students.txt");
  if(ifs.fail())
  {
    cerr << "File open failure!";
    exit(0);
  }
  i = 0;
  while( ifs >> s[i].id >> s[i].name >> s[i].screcord.score[0] >> s[i].screcord.score[1] )
  {
    s[i].screcord.sum = 0;
    for(int idx=0; idx<NUMCOURSE; idx++)
     s[i].screcord.sum += s[i].screcord.score[idx];
    s[i].screcord.avg = s[i].screcord.sum / NUMCOURSE;
    i++;
  }
  return i-1;
}
void	findusername(Students s[], int N, string username)
{
	int found =0;
  for(int i=0; i<N; i++)
  {
    if(s[i].name.find(username) != string::npos){
      cout << "We found the record for" << username << endl;
      printout(s[N]);
      found =1;
    }

  }
  if(!found)
  cout << "We don't have the record for " << username << endl;
}
void	printout(Student s)
{
		cout << "ID \t\t Name\t Score1\t Score2\t Sum\t Avg\n";
		cout << s.id << "\t";
		cout << s.name << "\t";
		for(int idx = 0; idx < NUMCOURSE; idx++)
			cout << s.screcord.score[idx] << "\t\t";
		cout << s.screcord.sum << "\t\t";
		cout << s.screcord.avg << endl;
}