#include <cctype>
#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

void tolowerstring(char[]);
bool exactmatch(char[], char[]);
bool partialmatch(char[], char[]);

int main()
{
  ifstream in_stream;
  char name[20];
  char readline[20], userinput[20];

  cout << "Enter your input\n";
  cin >> userinput;

  tolowerstring(userinput);
  in_stream.open("ny2018.txt", fstream::in);
  if(in_stream){
    while(in_stream >> readline){
      tolowerstring(readline);
      if(exactmatch(readline, userinput))
        cout << "Exact match found " << readline << endl;
      else if(partialmatch(readline, userinput))
        cout << "Partial match found " << readline << " includes " << userinput << endl;
    }
  }
}
void tolowerstring(char str[]){
  for(int i=0; i<strlen(str);i++)
  {
    str[i] = tolower(str[i]);
  }
  // make it lowercase
}
bool exactmatch(char readline[], char userinput[]){
 int exact = strcmp(readline, userinput);
 if (exact == 0)
 {
 return true;
 }
 else{
 return false;
 }
}
bool partialmatch(char readline[], char userinput[])
{
  char *partialmatch;
  partialmatch = strstr(readline, userinput);
  if(partialmatch == 0)
  {
    return 1;
  }
  else{
    return 0;
  }

}