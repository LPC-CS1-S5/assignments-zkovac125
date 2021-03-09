#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int N, i, j;
    string stuName;
    double score1, score2, average, score_Sum1 = 0, score_Sum2= 0, classSum= 0, classAvg= 0;
    ofstream ofs;

    ofs.open("stuRecord.txt");
    if (ofs.fail())
    {
      cerr << "Open Error" << endl;
      exit(0);
    }
  
     cout << "Enter the number of students: " << endl;
     cin >> N;

     ofs << N << endl;

     for (int i = 0; i < N; i++)
     {
        cout << "What is the student's name: " << endl;
        cin >> stuName;
        ofs << stuName << " ";
      
         for (int j = 0; j < 2; j++)
         {
            cout << "What is the student's scores: " << endl;
            cin >> score1 >> score2;
            ofs << score1 << "," << score2 << " "<< endl;
            score_Sum1 += score1;
            score_Sum2 += score2;
            classSum = score_Sum1 + score_Sum2;
            average = (score1 + score2)/2;
            ofs << average << " "<< endl;
            break;
         }
       
     }
      ofs << "Class Sum: " << classSum << endl;
      classAvg = classSum / (N*2);
      ofs << "Class Average: " << classAvg << endl;
      ofs << endl;
     ofs.close(); 
}