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
  if(!isalnum(mail[0]))
    return false;
  while(email[i] != '@')
  {
    if(isalnum(email[i++]))
      continue;
    else
      return false;
  }
  if(i <= emaillength)
    return true;
  else 
    return false;
}
bool	domaincheck(char email[])
{
	char doaminstr[] = "com edu net org";
  char *res;
  int lenght,i;
  length = strlen(email);
  i = length-1;
  do{
    if(email[i] == '.')
      break;
  } while(i-- > 0);
  res = strstr(domainstr, email+i+1);
  if(res)
    return true;
  else 
    return false;
}