#include <iomanip>
#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

const int MAXSIZE = 1000;
struct EmployeeRec{
  int ID;
  string first_name;
  string last_name;
  long salary;
  string department_name;
  int month;
  int day;
  int year;
  int count;
};

int makerecord(EmployeeRec []);
void printRecords(EmployeeRec [], int);
void findEmployee(EmployeeRec [], int, string);
void searchEmployee(EmployeeRec, int, string);

int main
{
  int numofRecords =0;
  Namerecords nr[MAXSIZE];
  numofRecords = makerecord9(nr);
  printRecords(nr, numofRecords);
   
}
int makerecord(EmployeeRec s[])
{
  int cnt=0;
  string readline;
  ifstream ifso;

  ifs.open("employee.txt")
  if(!ifso)
  {
    cout << "File Open Error\n";
    exit(0);
  }
  
  while((ifso >> readline)&&(cnt < 1000) ){

  }
  return cnt;
}