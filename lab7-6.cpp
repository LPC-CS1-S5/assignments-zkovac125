//Array Insertation
//*insert a “new element” into the array that already has sorted order. Also, we should delete one element from the array and the array should be re-arranged without any empty space. The total number of elements must be managed after insertion or deletion.*//
#include <iostream>
#include <iomanip>
using namespace std;

void insertone(int [], int &, int);
void deleteone(int [], int&, int);
void printout(int [], int);

int main()
{
  constant intSIZE=100;
  int usernum1, usernum2;
  int position
  int lenght=10;
  int number[SIZE]= {12, 15, 19, 21, 27, 29, 33, 37, 43};
  cout << "Enter the number to insert\n";
  cin >> usernum;
  printout(number, length);
  insertone(number, length, usernum);
  printout(number, lenght);

  cout << "Enter the number to delete\n";
  cin >> usernum;
  deleteone(number, length, usernum);
  printout(number, length);
}
void insertone( int number[], int &length, int usernum)
{
  int i,j;
        if (*length == 0){
            arr[*length] = usernum;
            *length += 1;
            return;
        }
        for(i=0; i< *length; i++) {
            if  ( *(arr+i) > input)
                break;
        }
        for(j= *length-1; j>=i; j--){
            *(arr+j+1) = *(arr+j); 
        }
        arr[i] = usernum;
        *length += 1;
        for(i=0; i<*length; i++)
             cout << *(arr+i) << " ";
        cout << endl;
        return;
}
void deletone(int number[], int &length, int usernum)
{
  
}
void printout(int number[], int last)
{
  for(int i=0;i<last; i++)
    cout << setw(5) << number[i];
  cout << endl;
}