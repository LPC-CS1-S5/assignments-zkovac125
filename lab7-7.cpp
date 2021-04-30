// Find the sub string in the original string

#include <iostream>
using namespace std;

int finduserstring(char [], int, char [], int);
int main() {
        int baselen, userlen, position;
        char cstr[] = "Chocolate";
        char userstr[100];   

        baselen = sizeof(cstr);
        cout << cstr << endl;
        cout << "Enter the string to find\n";
        cin.getline(userstr,100); //* gets the users input*//
        userlen = cin.gcount();

        position = finduserstring(cstr, baselen, userstr, userlen); //* Calls the function*//
        if (position != -1)
                cout << "Found your string at : " << position << endl;
        else
                cout << "Not found\n";
}
int finduserstring(char cstr[], int baselen, char userstr[], int userlen) 
{
  int j, pos=-1;

  for(int i=0; i<baselen-userlen+1; i++){
    for(j=0; j<userlen; j++){ //*number of c string lengths*//
      if ( cstr[i+j] != userstr[j] ) //* If two char are different it exits the loop
        break;
    {
      if(j==userlen) { //* User string matches the c string*//
        pos =1;
        return pos;
      }
    }
    return pos;
    }
  }
}