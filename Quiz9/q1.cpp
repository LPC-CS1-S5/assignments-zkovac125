#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//const int MAXSIZE=1000;
struct EmployeeRec{
  int id;
  string name;
  int salary;
  string department_name;
  int month;
  int day;
  int year;
  //int cnt;
};

void makerecord(EmployeeRec &, ifstream &);
//void printRecords(EmployeeRec [], int);
void findEmployee(EmployeeRec [], int);
void searchEmployee(EmployeeRec [], int);

//string getid(string);
//string getname(string);
//int getsalary(string);
//string getdepartment(string);
//string getday(string);
//string getmonth(string);
//string getyear(string);
//int getcount(string);

int main()
{
  const int NUM_EMP= 6; // 10 for the number of employees
  EmployeeRec emp[NUM_EMP]; //Needed this to be an array
  ifstream ifs;
  //numofRecords = makerecord(nr);
  //printRecords(nr, numofRecords);
  ifs.open("employee.txt");
  if (!ifs)
  {
    cout << "File Open Error\n";
    exit(0);
  }
  for(int i=0; i<NUM_EMP; i++)
  {
    makerecord (emp[i], ifs);
  }
  for(int i=0; i<NUM_EMP; i++){
    cout << emp[i].id << endl;
    cout << emp[i].name << endl;
    cout << emp[i].salary << endl;
    cout << emp[i].department_name << endl;
    cout << emp[i].day << "/";
    cout << emp[i].month << "/";
    cout << emp[i].year << endl;
  } //This eliminates the need for the printout function
  findEmployee(emp, NUM_EMP );
  searchEmployee(emp, NUM_EMP );
}

void makerecord(EmployeeRec &emp, ifstream &ifs)
{
  ifs >> emp.id;
  ifs >> emp.name;
  ifs >> emp.salary;
  ifs >> emp.department_name;
  ifs >> emp.month;
  ifs >> emp.day;
  ifs >> emp.year;
}
void findEmployee(EmployeeRec emp[], int size)
{
  int comp =100000;
  
  bool found = false;
  for(int i=0; i<size; i++)
    if(comp < emp[i].salary)
    {
      cout << emp[i].id << endl;
      cout << emp[i].name << endl;
      cout << emp[i].salary << endl;
      cout << emp[i].department_name << endl;
      cout << emp[i].day << "/";
      cout << emp[i].month << "/";
      cout << emp[i].year << endl;
      found = true;
    }
    if(!found)
      cout << "There is no employee with a salary greater than 100,000" << endl;
}
void searchEmployee(EmployeeRec emp[], int size)
{
  string userentry;
  cout << "Enter a department \n";
  cin >> userentry;
  bool found = false;
  for(int i=0; i<size; i++){
    if(userentry == emp[i].department_name){
      cout << emp[i].id << endl;
      cout << emp[i].name << endl;
      cout << emp[i].salary << endl;
      cout << emp[i].department_name << endl;
      cout << emp[i].day << "/";
      cout << emp[i].month << "/";
      cout << emp[i].year << endl;
      found = true;
    }
    if(!found){
      cout << "There is no " << userentry << " department." << endl;
    }
  }
}