#include <iostream>
#include <fstream>
using namespace std;

void getinput(int &, int &);
int isSame(int, int);
int isGreater(int, int);
void writefile(ofstream &, int);

int main()
{
	int num1, num2;
	int div;

	ofstream ofs;
	ofs.open("question5.txt");
	if (ofs.fail())
	{
		cerr << "File Open Error \n";
		exit(0);
	}
	
	while(1)
	{
		getinput(num1, num2);
		if ( isSame(num1, num2))
			break;
		div = isGreater(num1, num2);
		writefile(ofs, div);
	}
	ofs.close();
}
