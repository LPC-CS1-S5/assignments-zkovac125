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
  




  find(',', position)
  substr(start, found-start)
  while(find('.'))
}
int	findnumchars(string txt)
{
	
}

