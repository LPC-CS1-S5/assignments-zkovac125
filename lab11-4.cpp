#include	<iostream>
#include <iomanip> // Need this to use the setw()
#include	<fstream>
#include	<string>
using namespace std;

const	int 	MAXSIZE=1000; 
struct Namerecords { // Struct Array
	string	stname;
	string 	sex;
	int 	year;
	string 	name;
	int 	count;
};

int		makingNameRecords(Namerecords []);
void	printNameRecords(Namerecords [], int);

string	getstatename(string);
string	getgender(string);
int		getyear(string);
string	getname(string);
int		getcount(string);


int main()
{
	int				numofRecords = 0;
	Namerecords 	nr[MAXSIZE];

	numofRecords = makingNameRecords(nr);
	printNameRecords(nr, numofRecords);

}
int		makingNameRecords(Namerecords nr[])
{
  //reads from a file and then parse the each feild by the delimiter','
	int			cnt=0;
	string		readline;
	ifstream	ifso;

	ifso.open("cany.txt");
	if (!ifso) 
  {
		cout << "File Open Error\n";
		exit(0);
	}
  //If file is unable to open then it will show the error.
	while((ifso >> readline) && (cnt < 1000) ) // read from the file, 
  {
    //the array Namerecords that are filled with the fei;ds of the line from a file. 
		nr[cnt].stname = getstatename(readline);
		nr[cnt].sex	= getgender(readline);
		nr[cnt].year = getyear(readline);
		nr[cnt].name 	= getname(readline);
		nr[cnt].count		== getcount(readline);
		cnt++;
	}
	return cnt;
  // returns the array elements and the same number of lines from a file
}
void 		printNameRecords(Namerecords nr[], int numofRecords)
{
	for(int i=0; i<numofRecords; i++)
  {
		cout << setw(5) << nr[i].stname << "\t";
		cout << setw(3) << nr[i].sex << "\t";
		cout << setw(5) << nr[i].year << "\t";
		cout << setw(10) << nr[i].name << "\t\t";
		cout << setw(5) << nr[i].count << endl;
	}
}
string 		getstatename(string str)
{
	return 	str.substr(0,2);
}
string 		getgender(string str)
{
	int 	pos = str.find(',');
	return 	str.substr(pos+1, 1);
}
int 		getyear(string str)
{
	int		startpos, pos;
	int		yearlen=4;
	int		year;
	startpos = 0;
	for(int i=0; i<2; i++) 
  {
		pos = str.find(',',startpos);
		startpos = pos+1;
	}
	year = stoi(str.substr(pos+1, yearlen));
	return year;
}
string 		getname(string str)
{	
	int		startpos, pos, endpos;
	startpos = 0;
	for(int i=0; i<3; i++) 
  {
		pos = str.find(',',startpos);
		startpos = pos+1;
	}
	endpos = str.find(',', startpos);
	return str.substr(startpos, endpos-startpos);
}
int 		getcount(string str)
{
	int		startpos, pos, count;
	
	startpos = 0;
	for(int i=0; i<4; i++) 
  {
		pos = str.find(',',startpos);
		startpos = pos+1;
	}
	count = stoi(str.substr(startpos, str.length()));
	return count;
}
 