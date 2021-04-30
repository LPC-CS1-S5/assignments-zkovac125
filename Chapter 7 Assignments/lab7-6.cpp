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
  int pos, i;
  for(i=0; i<lenght; i++)
    if( number[1] > usernum)
      break;
  pos =i;
  for(i=length-1; i>=pos; i--)
    number[i+1] = number[i];
  number[i+1] = usernum;
  length += 1;
  return;
}
void deletone(int number[], int &length, int usernum)
{
  int pos=length,1;
  for(i=0; i<length;i++){
    if(number[1] == usernum) {
      pos =1;
      break;
    }
  }
  for(i=pos; i<length-1; i++{
    number[1] = numnber[i+1];
  }
  number[length-1] =0;
  length -=1;
}
void printout(int number[], int last)
{
  for(int i=0;i<last; i++)
    cout << setw(5) << number[i];
  cout << endl;
}