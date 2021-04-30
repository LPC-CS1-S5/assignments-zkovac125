// Find the sub string in the original string

#include <iostream>
using namespace std;

int finduserstring(char[], int, char[], int);
int main() {
        int cstrlen, userlen, position;
        char cstr[] = "Chocolate";
        char userstr[100];   

        cstrlen = cstrlen(cstr);
        cin >> userstr; //* gets the users input*//
        userlen = cstrlen(userstr);

        position = finduserstring(cstr, cstrlen, userstr, userlen); //* Calls the function*//
        if (position != -1)
                cout << "Found your string at : " << position << endl;
        else
                cout << "Not found\n";
}
int finduserstring(char cstr[], int cstrlen, char userstr[], int userlen) 
{
  int j, pos=-1;

  for(int i-=0; i<cstrlen-userlen+1; i++){
    for(j=0; j<userlen; j++){ //*number of c string lengths*//
      if ( cstr[i+j] != userstr[j] ) //* If two char are different it exits the loop
        break;
    {
      if(j== userlen) { //* User string matches the c string*//
        pos =1;
        return pos;
      }
    }
    return pos;
    }
  }
}