#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>

using namespace std;
int countsubs(string, keystring);

int main()
{
  int cnt;
  int userinput;
   string  words = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";

    cout << "Enter user string "; 
    cin >> userinput;
  cnt = countsubs(userinput);
  cout << "The count of occurences: " << cnt << endl;
}
int countsubs(string words; )
{
  int found, start, count =0;
  
  string readstring;
  while( words >> readstring){
    start =0;
    while(((found = readstring.find(keystring, start)) != string::npos))
    {
      count +=1;
      cout << "Found in " << readstring << " " << "at " << found + 1;
    }
  }
  return count;
}