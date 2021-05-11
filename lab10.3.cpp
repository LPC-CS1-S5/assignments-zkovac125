// Condition for the email string.
// start with the alphabet
// ID characters are all alpha numeric characters
// last string should be one of the list {com, edu, org, and net}
#include		<iostream>
#include		<cctype> //needed to use the isalnum function
#include		<cstring> //neded to use for the strings
using namespace std;

bool 	idcheck(char []); //id Function
bool 	domaincheck(char []); //domaincheck function

int 	main()
{
		char 	email[20]; //Array Size

		cout 	<< "Enter your email \n";
		cin 	>> email; //gets users email

		if( idcheck(email)) // id it passes then the ID check passed
			cout << "ID check passed\n";
		if( domaincheck(email)) //This is if the domain was checked
			cout << "Domain check passed\n";
}
bool 	idcheck(char email[])
{
  int i=0;
  int emaillength= 10;

  if(!isalnum(email[0]))
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
	char domainstr[] = "com edu net org";
  char *res;
  int length,i;
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
//For this code, we needed to use isalnum to find if arg is a letter or a digit.
Used the array email for the lengthen as we can not account for user input.