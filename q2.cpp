#include <iomanip>
#inlucde <iostream>

using namespace std;

viod findMaxSum(int[], int[][5], int, int);
const int SIZE =10;
int main()
{
  const int NUM_ROWS =6;
  const int NUM_COLS =5;
  int resutl[Size] ={0};
  int numbers[NUM_ROWS][NUM_COLS] = {{2, 7, 9, 6, 4,}
  {6, 1, 8, 10, 4}
  {4, 3, 7, 2, 9}
  {9, 9, 0, 3, 1}
  {8, 8, 7, 8, 9}
  {1, 2, 1, 2, 3}};
  findMaxSum(result, numner, NUM_ROWS, NUM_COLS);
  cout << "The row vlaues are ";
  for(int i=0; i<rows; i++)
    cout << setw(5) << result[i];
  cout << endl;
}
void findMaxSum(int result[]. int num[][5]. int rows, int cols)
{
  int sumrow =0, sum =0, idx;
  for(int i=0; i<rows; i++)
  {

  }
}