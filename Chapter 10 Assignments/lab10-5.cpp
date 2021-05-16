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
  int start, found, cnt=0;
  string splitstr;

  start =0;
  while((found=txt.find(delimiter, start)) != string::npos){
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
  for(it=txt.begin(); it != txt.end(); it++){
    index = *it - 'A';
	  if(seen[index] == 0){
     seen[index] =1;
     uniquecnt += 1;
     break;
    }
  }
  for(int i=0; i<=26; i++){
    if(seen[i] == 1){
      cout << static_cast<char>(i+'A') << "\t";
      break;
    }
  }
  cout << "The number of unique character " << uniquecnt << endl;
  return uniquecnt;
   cout << endl;
}

//For this code it the main challange was to get it to stop the continious lopp it keep going even after added the break. I needed an extra bracket in the while loop. 