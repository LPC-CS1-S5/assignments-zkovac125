// Cooperative Programming Lab 10-5-1
// The Class string and it's member functions.

#include	<iostream>
#include	<string>
using namespace std;

int	splitwords(string, char);
int	findnumchars(string);

int	main()
{
	string	txt1("ABCDEF,GHI,JKLMN,OP");
	string 	txt2("BACDGABCDAZ");
	int		result;
	char	delimiter=',';

	result = splitwords(txt1, delimiter);
	result = findnumchars(txt2);
}

int	splitwords(string txt, char delimiter)
{
  int start, found cnt=0;
  string splitstr;

  start =0;
  while(found=txt.find(delimiter, start) != string::npos){
    splitstr = txt.substr(start, found-start);
    cout << "Split Word " << splitstr << endl;
    start = found + 1;
    cnt += 1;
  }
  splitstr=txt.substr(start, txt.length()-start);
    cout << "Split Word " << splitstr << endl;
    return cnt +1;
}
int	findnumchars(string txt) // Count the number of unique characters in the text line.//
{
  int seen[26] = {0};
  int index, uniquecnt =0;
  string::iterator it;
  for(it=text.begin(); it != text.end(); it++){
    index = *it - 'A';
	  if(seen[index] == 0){
     seen[index] =1;
      uniquecnt += 1;
    }
  }
  for(int i=0; i<=26; i++){
    if(seen[i] == 1){
      cout << static_cast<char>(i+'A') << "\t";
    }
  }
  cout << endl;
  cout << "The number of unique charahcter are " << uniquecnt << endl;
  return uniquecnt;
}

