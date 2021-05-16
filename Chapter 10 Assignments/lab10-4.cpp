#include <iostream>
#include <cstring>
using namespace std;

int  	stringLength(const char []);
void 	stringCopy(char [], const char[]);
int 	stringCompare(const char [], const char []);
int 	stringSplit(const char [], char [][100], char );
int main()
{
	const int SIZE=100;
	char mystr[SIZE] = "C++,Programming,section,04";
	char dest[SIZE];
	char splitlist[10][SIZE];
	int 	length;
  int cnt;

	length = stringLength(mystr);
	cout << "The length of mystr " << length << endl;

	//*2 stringCopy
	stringCopy(dest, mystr);
	cout << "Copied string " << dest << endl;
	//*3 stringCompare
	int ret = stringCompare(dest, mystr);
	cout << "Compare result " << ret << endl;
	//*4 stringSplit
	cnt = stringSplit(mystr, splitlist, ',');
	for(int i=0; i<cnt; i++)
		cout << "Split list " << splitlist[i] << endl;
}
int stringSplit(const char source[], char dest[][100], char delimiter)
{
  int i =0;
  int cnt;
  int j =0;
  int destination;
	while((source[i] != '\0')
    if(source[i] == delimiter)
       destination[cnt][j-1]='\0';
       cnt++;
      
}
int stringCompare(const char dest[], const char source[])
{
  int i=0;
  const char dest[i];
  const char source[i];
  int destination;

  for(i=0; i<7; i++)
  while((source[i] != '\0')&&(destination[i] != '\0')
  {
    if(source[i] != dest[i])
      return -1;
  }
  if((destination[i] == '\0')&&(source[i] == '\0')
    return 0;
  if(dest[i]) == '\0')
    return 1;
  if(source[i] == '\0')
    return 2;
}

void stringCopy(char dest[], const char source[])
{
	int i=0;
  int destination;
  for(i=0; i<7; i++)
  while(source[i] != '\0')
    destination[i] = source[i];
}
int stringLength(const char str[])
{
	while(source[i] != '\0')
}