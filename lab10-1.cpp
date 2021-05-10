//lenght is at least 6
//contains one digit
//contains one lowercase and uppercase alphabet
//contains at least one specail character

#include <iostream>
#include <cstring> 
#include <cctype>

using namespace std;

bool checklength(char []);
bool checkdigit(char []);
bool checklower(char []);
bool checkupper(char []);
bool checkspecial(char []);

int main()
{
  char pwdstr[20];

  cout << "Enter your password\n";
  cin >> pwdstr;

  if( checklength(pwdstr) && checkdigit(pwdstr) &&checklower(pwdstr) && checkupper(pwdstr) && checkspecial(pwdstr))
      cout << "Your password is strong\n";
}

bool checklength(char pwdstr[]){
  int i =0;
  while(pwdstr[i] != '\0')
  {
    i++; 
  }
  if(i >= 6){
    return true;
  }
  else
   return false;
}
bool checkdigit(char pwdstr[]){
  int i =0;
  while(pwdstr[i] != '\0')
  {
    i++; 
  }
  if(checkdigit(pwdstr[i])){
    return true;
  }
  else
   return false;
}
bool checklower(char pwdstr[]){
  int i =0;
  while(pwdstr[i] != '\0')
  {
    i++; 
  }
  if(checklower(pwdstr[i])){
    return true;
  }
  else
   return false;
}
bool checkupper(char pwdstr[]){
  int i =0;
  while(pwdstr[i] != '\0')
  {
    i++; 
  }
  if(checkupper(pwdstr[i])){
    return true;
  }
  else
   return false;
}
bool checkspecial(char pwdstr[]){
  int i =0;
  while(pwdstr[i] != '\0')
  {
    i++; 
  }
  if(checkspecial(pwdstr[i])){
    return true;
  }
  else
   return false;
}