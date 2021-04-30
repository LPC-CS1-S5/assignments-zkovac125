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

  findMAXSUM(result, numbers, NUM_ROWS, NUM_COLS);
  cout << "The row values are;"
;
for(int i=0; i<NUM_COLS; i++) 
  cout << setw(5) << result[i];
cout << endl;

finMacElm(result, numbers, NUM_ROWS, NUM_COLS);
cout << "The Max Values in the Rows are:\n"
for(int i=0; i<NUM_ROWS; i++)
  cout << setw(5) << result[i] << endl;

findMaxVal(result, numbers, NUM_ROWS, NUM_COLS);
cout << "The Max Values in the rows are; \n";
for(int i=0; i<NUM_ROWS; i++)
  cout << setw(5) << result[i] << endl;

}