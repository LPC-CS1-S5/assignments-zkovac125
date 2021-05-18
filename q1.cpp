#include <iomanip>
#include <iostream>
#include <fstream>
#include <string> 
using namespace std;
const int ID = 6;
struct Date{
  string Month;
  int day;
  int year;
}
struct EmployeeRec{
  int ID;
  string first_name;
  string last_name;
  long salary;
  string department_name;
  Date dstart;
}

int makerecord(EmployeeRec [])
void findEmployee(EmployeeRec [], int, string)
void searchEmployee(EmployeeRec, int, string)

int main
{
 
   
}
int makerecord(EmployeeRec s[])
{
  int i;
  ifstream ifs;

  ifs.open("employee.txt")
  if(ifs.fail())
  {
    cerr << "File Open Error\n";
    exit(0);
  }
  i = 0;
  while(ifs >> s[i].id >> )
}