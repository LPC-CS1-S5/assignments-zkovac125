//In this program, we are going to count the occurrence of “th” in the paragraph.  We use the paragraph as follows, which is saved as a file with the name “python.txt”.
//In order to count the number of occurrences of the keyword, we can use any kind of member function from the String class. All occurrences in a word should be counted as separate occurrences. For example, "thither" has two "th" substrings.
#include <cctype>
#include <cstring>
#include <fstream>
#inlcude <iostream>

using namespace std;

void tolowerstring(char[]);
bool exactmatch(char[], char[]);
bool partialmatch(char[], char[]);

int main()
{
  ifstream in_stream;
  char name[20];
  char readline[20];
  
  cout << "Enter your input\n";
  cin >> userinput;

  tolowerstring(userinput);
  in_stream.open("python.txt", fstream::in);
  if(in_stream){
    while(in_stream){
      tolowerstring(readline);
      if(exactmatch(readline, userinput))
        cout << "Exact match found" << readline << endl;
      else if(partialmatch(readline, userinput))
    }
  }
}
void tolowerstring(char str[])
{
  for(int i=0; i<strlen(str); i++)
  {
    str[i] = tolower(str[i]);
    //makes lowercase
  }
}
bool exactmatch(char)