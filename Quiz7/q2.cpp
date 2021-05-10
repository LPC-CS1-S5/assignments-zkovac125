#include <iostream>
using namespace std;

void printtriangle(int numbers[][3], int, int);
int main()
{
  const int SIZE =3;
  int numbers[SIZE][SIZE] = { {0, 1, 2,}, {3, 4, 5}, {6, 7, 8} };
  int row = 3;
  int col = 3;
  printtriangle(numbers, row, col);
}
void printtriangle(int num[3][3], int row, int col)
{
  int i, j;
  for(int i =0; i < row; i++)
  {
    for(j =0; j < col; j++) {
      if (i < j)
      {
        cout << "0" << " ";
      }
      else 
      cout << num[i][j] << " ";
    } 
    cout << endl;
  }
}





