// Chapter 11. Structured Data
// Programming Lab 11-2
// lab11-2.cpp

#include	<iostream>
#include	<fstream>
#include	<string>
using namespace std;
const	int 	NUMCOURSE=2;
struct Student
{
	int		id;
	string	name;
	int 	score[NUMCOURSE];	
	int		sum;
	int		avg;
};
int		makingstructarray(Student []); // return value : the number of struct array
void	printout(const Student );
void	findusername(Student [],int, string);

int 	main()
{
	int		numofRecords=0;
	Student	s[50];
	string	username;

	numofRecords = makingstructarray(s);
	cout << "Total number of stdents records is " << numofRecords << endl;
	for(int	 i=0; i<numofRecords; i++)
		printout(s[i]);

	cout << "Enter user name to find in Student's records\n";
	cin	>> username;
	findusername(s, numofRecords, username);
}
int		makingstructarray(Student s[])
{
  int i;
  ifstream ifs;

  ifs.open ("students.txt");
  if(ifs.fail())
  {
    cerr << "File open failure!";
    exit(0);
  }
  while( ifs >> s[i].id >> s.name >> s.score[0] >> s.score[1] )
  {
    s.scre.sum = 0;
    for(int idx=0; idx<NUMCOURSE; idx++)
     s.sum += s.score[idx];
    s.avg = s.sum / NUMCOURSE;
    i++;
  }
  return i-1;
}
void	findusername(Student s[], int N, string username)
{
	int found =0;
  for(int i=0; i<N; i++)
  {
    if(s.name.find(username) != string::npos){
      cout << "We found the record for" << username << endl;
      printout(s[i]);
      found =1;
    }

  }
  if(!found)
  cout << "We don't have the record for " << username << endl;
}
void	printout(Student s)
{
		cout << s.id << "\t" << s.name << "\t"
		<< s.score[0] << "\t" << s.score[1] << 
		"\tsum:" << s.sum << "\taverage: "<< s.avg << endl;
}