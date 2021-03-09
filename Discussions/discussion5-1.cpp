#include <iostream>
#include <cmath>

using namespace std;

//variable
int convert_BinaryToDecimal(long long);

int main()
{
    //variable
    long long binary_Number;
    //asking for the binary number
    cout << "Enter a binary number: ";
    cin >> binary_Number;
 
    cout << binary_Number << " in binary = " << convert_BinaryToDecimal(binary_Number) << " in decimal";
    return 0;
}

int convert_BinaryToDecimal(long long binary_Number)
{
    //variables 
    int decimal_Number = 0; 
    int i = 0;
    int remainder;
    while (binary_Number!=0)
    {
        remainder = binary_Number%10;
        binary_Number /= 10;
        decimal_Number += remainder*pow(2,i);
        ++i;
    }
    return decimal_Number;
}