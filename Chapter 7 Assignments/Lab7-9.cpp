#include <iostream>
#include <iomanip>
using namespace std;

void findMaxSum(int [], int [][5], int, int);
void findMaxElm(int [], int [][5], int, int);
void findMaxVal(int [], int [][5], int, int);
const int SIZE = 10;

int main()
{
  const int NUM_ROWS = 6; //* # of rows*//
  const int NUM_COLS =5; //# of Coloums
  int result[SIZE] ={0};
  int numbers[NUM_ROWS][NUM_COLS] = { {2, 7, 9, 6, 4},
  {6, 1, 8, 10, 4},
  {9, 9, 0, 3, 1},
  {8, 8, 7, 8, 9},
  {1, 2, 1, 2, 3}};

  findMaxSum(result, numbers, NUM_ROWS, NUM_COLS);
  cout << "The row values are;";

for(int i=0; i<NUM_COLS; i++) 
  cout << setw(5) << result[i];
cout << endl;

finMaxElm(result, numbers, NUM_ROWS, NUM_COLS);
cout << "The Max Values in the Rows are:\n"
for(int i=0; i<NUM_ROWS; i++)
  cout << setw(5) << result[i] << endl;

findMaxVal(result, numbers, NUM_ROWS, NUM_COLS);
cout << "The Max Values in the rows are; \n";
for(int i=0; i<NUM_COLS; i++)
  cout << setw(5) << result[i] << endl;
cout << endl;
}
void findMaxSum(int result[], int num[][6], int rows, int cols)
{
  int maxrowsum =0, maxrow;
  for(int i=0; i<rows; i++){
    int rowsum = 0;
    for(int j=0; j<cols; j++)
    {
      rowsum += num[i][j];
    }
    // row summation of the row
    if(maxrowsum < rowsum || i == 0){
      maxrowsum = rowsum;
      maxrow = i;
    }
 }
 for(int i=0; i<cols; i++)
  result[i] = num[maxrow] [i];
}
void findMaxElm(int result[], int num[][6], int rows, int cols) // Find the elements which are the greatest number in each row.
{
  int i;
   result=num[0];
   for(i=0; i<col; i++)
   if(result<num[i])
    result=num[i];
  return num;
  
}
void findMaxVal (int result[], int num[][6], int rows, int cols) // Greatest among all values
{
  int maxVal;
  maxVal=num[0];
  for(num = 1; numbers < SIZE; numbers++)
  {
    if(numbers[i] > maxVal)
      maxVal = num[i]
     
  }
  return num;
}