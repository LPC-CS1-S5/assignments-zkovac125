#include <iomanip>
#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

const int MAXSIZE = 1000;
struct EmployeeRec{
  int id;
  string first_name;
  string last_name;
  float salary;
  string department_name;
  int month;
  int day;
  int year;
  int cnt;
};

int makerecord(EmployeeRec []);
void printRecords(EmployeeRec [], int);
void findEmployee(EmployeeRec [], int, string);
void searchEmployee(EmployeeRec, int, string);

string getid(string);
string getfirstname(string);
string getlastname(string);
int getsalary(string);
string getdepartment(string);
string getmonth(string);
string getday(string);
string getyear(string);
int getcount(sting);

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
  
  while((ifso >> readline)&&(cnt < 1000))
  {
    nr[cnt].id = getid(readline);
    nr[cnt].first_name = getfirstname(readline);
    nr[cnt].last_name = getlastname(readline);
    nr[cnt].salary = getsalary(readline);
    nr[cnt].department_name = getdepartment(readline);
    nr[cnt].day = getday(readline);
    nr[cnt].month = getmonth(readline);
    nr[cnt].year = getyear(readline);
    cnt++
  }
  return cnt;
}
void findEmployee(EmployeeRec s[], int N, string id)
{
  int found -0;
  for(int i=0; i<N; i++)
  {
    for(s[id].name.find(EmployeeRec) != string::npos)
    cout << "We found a record for " << first_name << " " << last_name << endl;
    printRecords(s[i]);
    found =1;
  }
}
void printRecords(nr[], int numofRecords)
{
  for(int i=0; i<numofRecords; i++){
    cout << setw(6) << nr[i].id << "\t";
    cout << setw(6) << nr[i].first_name << "\t";
    cout << setw(6) << nr[i].last_name << "\t";
    cout << setw(6) << nr[i].salary << "\t";
    cout << setw(6) << nr[i].department_name << "\t";
    cout << setw(6) << nr[i].day << "\t";
    cout << setw(6) << nr[i].month << "\t";
    cout << setw(6) << nr[i].year << "\t";
  }
}
void findEmployee(int [])
{
  int max
  for(i=0; i<cnt; i++)
  {
    employee[i].search(salary);
  }
  max=employee[0].salary;
  for(i=0; i<cnt; i++)
  {
    if(employee[i].salary>max)
    {
      max=emp[i].salary;
    }
  }
  for(i=0; i<cnt; i++)
  {
    if(emp[i].salary==max){
    cout << "The Employee with the max Slaray is: " << employee[i].first_name;
    }
  }
  return 0;
}