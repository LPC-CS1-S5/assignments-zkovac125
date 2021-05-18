#include <iomanip>
#inlucde <iostream>
#include <fstream>
#include <string> 

using namspace std;

struct Date{
  string Month;
  int day;
  int year;

}
struct EmployeeRec{
  int ID;
  string first_name;
  string last_name;
  int salary;
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
  while(ifs >> )
}