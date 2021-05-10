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
  {
      cout << "Your password is strong\n";
  }
  else 
      cout << " Your password needs to have six characters, at least one digit, an upper and lower case, and one special character. " << endl;
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
  if(isdigit(pwdstr[i])){
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
  if(islower(pwdstr[i])){
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
  if(isupper(pwdstr[i])){
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
  if(ispunct(pwdstr[i])){
    return true;
  }
  else
   return false;
}