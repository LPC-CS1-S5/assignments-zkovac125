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

bool idcheck(char []); //ID Check Function
bool domaincheck(char []); //Domain Check Function

int main()
{
  char email[20]; // Array Size

  cout << "Enter your email \n";
  cin >> email; //gets users email

  if(idcheck(email)) //If iD check passes
    cout << "ID check passed\n";
  if(domaincheck(email)) //If domain check passes
     cout << "Domain check passed\n";
}
bool idcheck(char email[])
{
  int i=0;
  int emaillength =10;

  if(!isalnum(email[0]))
    return false;
  while(email[i] != '@') //Displayes the input one charachter at a time.
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
bool domaincheck(char email[])
{
  char doaminstr[] = "com edu net org";
  char *res;
  int length;
  int i;
  length = strlen(email);
  i = length-1;

  do{ if(email[i] == '.')
    break;
  }while(i-- > 0);
  res = strstr(doaminstr, email+i+1); //finds the first occurance of domainstr and email check if it matches.
  if(res)
    return true;
  else 
    return false;
}