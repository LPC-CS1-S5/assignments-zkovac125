#inlcude <iostream>
using namespace std;

void proint triangle(int numbers[][3], int, int);
int main()
{
  const int SIZE =3;
  int numbers[SIZE][SIZE] = { {0, 1, 2,}, {3, 4, 5}, {6, 7, 8} };
  int row = 3;
  int col = 3;
  print triangle(numbers, row, col);
}
void printtriangle(int num[][3], int row, int col)
{
  int i, j;
  for(int i =0; i <SIZE; i++)
  {
    for(j =0; j < SIZE; j++) {
      if (i < j)
      {
        cout << "0" << " ";
      }
      else 
      cout << numbers[i][j] << " ";
    } 
    cout << endl;
  }
}