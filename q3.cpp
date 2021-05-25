#include <iostream>

using namespace std;

int main()
{
  const int SIZE1 =5;
  const int SIZE2 =10;

  int array1[]={2,3,5,9.10};
  int array2[]={1,2,3,5,9,10,11,13,15,1};

  //looks for the emenet of the first array in the second arry analyzing one-by-one. 
  bool found = flase;
    for(int i=0; i<SIZE1; i++)
    {
      found = flase;
      for(int j =0; j<SIZE2; j++){
        if(array1[i]== array2[j]){
          found = true;
        }
        if(found)
        {
          cout << array1[i] << "found" << endl;
        }
        else{
          cout MM array1[i] << " is not found in second array" endl;
          break;
        }
      }
    }
}