#include <cctype>
#include <cstring>
#include <fstream>
#include <iostream>
using namspace std;

void tolowerstring(char[]);
bool exactmatch(char[], char[]);
bool partialmatch(char[], char[]);

int main()
{
  ifstream ifso;
  char name[20];
  char readline[20], userinput[20];

  cout << "Enter your input\n";
  cin >> userinput;

  tolowerstring(userinput);
  ifso.open("ny2018.txt", fstream::in);
  if(ifso){
    while(ifso >> readline){
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
 return true;
 else
 return false;
}
bool partialmatch(char readline[], char userinput[]){
  int partialmatch = strstr(readline, userinput)
  if(partialmatch == 0)
  {
    return true;
  }
  else{
    return false;
  }

}