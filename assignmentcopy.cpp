#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int N;
    string stuName;
    double score1;
    ofstream ofs;

    ofs.open("516Zachariah.txt");
    if (!ofs)
    {
        cout << "Open Error\n";
        exit(0);
    }
    
     cout << "Enter the number of students: " << endl;
     cin >> N;
    
     ofs << N << endl;
     for (int i = 0; i < N; i++)
     {
        cout << "What is the student's name: " << endl;
        cin >> stuName;
        ofs << stuName << endl;
     for (int j = 0; j < 2; j++)
     {
        cout << "What is the student's score: " << endl;
        cin >> score1;
        ofs << score1 << " ";
     }
     ofs << endl;

    }

    ofs.close();