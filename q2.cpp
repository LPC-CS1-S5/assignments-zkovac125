//Validate the email account
//We are going to make a program that checks the validity of the email accounts. The requirement of an email account is as follows:
//emailid@organization.com
//The id of the email must be starting with the alphabet characters
//The length of id must be greater than 5 and less than 15
//The domain name should be one of the list {com, org, edu, net, and gov}
//The program asks for the user email string and then split the id, organization name, and domain name. After that, check the validity of the email string base on the above requirements.
#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

bool idcheck(char []);
bool domaincheck(char []);

int main()
{
  char email[20];

  cout << "Enter your email \n";
  cin >> email; //gets users email

  if(idcheck(email))
    cout << "ID check passed\n";
  if(doamincheck(email))
     cout << "Domain check passed\n";
}
bool idcheck(char email[])
{
  int i=0;
  int emaillength =10;

  if(!isalnum(email[0]))
  return false;
  while(email[i]) != '@')
  {
    if(isalnum(email{i++}))
      continue;
    else
      return false;
  }
  if(i <= emaillength)
    return true;
  else  
    return false;
}
bool doamincheck(char email[])
{
  char doaminstr[] = "com edu net org";
  char *res;
  int length;
  int i;
  length = strlen(email);
  i = length-1;

  do{
    if(email[i] == '.')
    break;
  }while(i-- >0);
  res = strstr(doaminstr, email+i+1)
  if(res)
    return true;
  else 
    return false;
}