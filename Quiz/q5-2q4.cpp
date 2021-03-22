#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  int N, i , j, k;
  string empNumber,empName, depName;
  double salary;
  ofstream ofs;

  ofs.open("employee.txt");
  if (ofs.fail())
  {
    cerr << "Open Error" << endl;
    exit(0);
  }

   cout << "Enter the number of employees: " << << endl;
   cin >> N;

   ofs << N << endl;

   for (int i=0; i < N; i++)
   {
     cout << "What is the Employee Number: " << endl;
     cin >> empNumber;
     ofs << "ID: " << empNumber << " ";

      for(int j =0; j < 2; j++)
      {
        cout << "What is the Employees Name: " << endl;
        cin << empName << " ";
        ofs << empName << endl;
       for(int = k; j < 3; k++)
       {
         cout << "What is the Department Name: " << endl;
         cin << depName << " ";
         ofs << depName << endl;
         break;
       }

      }
   }
    ofs << endl;
   ofs.close();

}