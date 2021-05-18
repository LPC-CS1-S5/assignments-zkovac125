// Chapter 11. Structured Data
// Programming Lab 11-2
// lab11-2.cpp

#include	<iostream>
#include	<fstream>
#include	<string>
using namespace std;
const	int 	NUMCOURSE=2;
struct Score {
  int score[NUMCOURSE];
  int sum;
  int avg;
};
struct Student
{
	int		id;
	string	name;
  Score screcord;
};
int		makingstructarray(Student []); // return value : the number of struct array
void	printout(Student s );
void	findusername(Student [],int, string);
int 	main()
{
	int	numofRecords;
	Student	s[numofRecords];
	string	username;
  int i;
  
	numofRecords = makingstructarray(s);
	cout << "Total number of students records are " << numofRecords << endl;
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
  i =0;
  while(ifs >> s[i].id >> s[i].name >> s[i].screcord.socre[0] >> s[i]screcord.score[1]){
    s[i].screcord.sum =0;
    for(int idx=0; idx<NUMCOURSE; idx++)
     s[i].screcord.sum += s[i].screcord.score[idx];
    s[i].screcord.avg =s[i].screcord.sum / NUMCOURSE;
    i++;
  }
  return i-1;
}
void	findusername(Student s[], int numofRecords, string username)
{
	int found =0;
  for(int i=0; i<N; i++)
  {
    if(s[i].name,find(username) != string::npos){
      cout << "We found the record for" << username << endl;
      printrecord(s[i]);
      found =1;
    }

  }
  if(!found)
  cout << "We don't have the record for " << username << endl;
}
void	printout(Student s)
{
	cout << s. id << "\t" << s.name << "\t"
		<< s.score[0] << "\t" << s.score[1] << 
		"\tsum:" << s.sum << "\taverage: "<< s.avg << endl;

}