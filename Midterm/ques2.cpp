#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  int N,i,j;
  string stuName;
  double num =0,score_1, score_2, average, score_Sum1 =0,classSum =0, classAvg =0, numberAverage =0;
  ofstream ofs;

  ofs.open("student.text");
    if (ofs.fail()){
    cerr << "Open Error" << endl;
    exit(0);
  }
  for (int i=0; i<N; i++){
    cout << "Enter the name of students: " << endl;
    cin >> stuName;
    ofs << stuName << " ";
   
   for(int j=0; i < 2; j++){
     cout << "What are the student's scores? " << endl;
     cin >> score_1 >> score_2;
     ofs << "Score1: " << score_1 << "," << "Score2: " << score_2 << " " << endl;
     score_Sum1 += score_1;
     score_Sum1 += score_2;
     classSum = score_1 + score_2;
     average = (score_1/score_2)/2;
      if (average>80; num++){
        numberAverage = num + 1;
      }else(average<80{
        numberAverage = num;
      }
     ofs << average << " " <<endl;
     break;
    }
  }
    ofs << "The total number of students who have an average greter than 80: " << numberAverage << endl;
    ofs.close(); 
  }
     