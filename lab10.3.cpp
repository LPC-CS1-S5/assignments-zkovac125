// Condition for the email string.
// start with the alphabet
// ID characters are all alpha numeric characters
// last string should be one of the list {com, edu, org, and net}
#include		<iostream>
#include		<cctype>
#include		<cstring>
using namespace std;

bool 	idcheck(char []);
bool 	domaincheck(char []);

int 	main()
{
		char 	email[20];

		cout 	<< "Enter your email \n";
		cin 	>> email;

		if( idcheck(email))
			cout << "ID check passed\n";
		if( domaincheck(email))
			cout << "Domain check passed\n";
}
bool 	idcheck(char email[])
{
  int i=0;
  int emaillength= 10;
  if(!isalnum(mail[0])){
    return flase;
  }
  else
   return false;
}
bool	domaincheck(char email[])
{
	int i =0;
  while(domaincheck[i] != '\0')
  {
    i++; 
  }
  if(isprint(domaincheck[i])){
    return true;
  }
  else
   return false;
}