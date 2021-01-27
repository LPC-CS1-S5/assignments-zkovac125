//The regular hours for the work week are 40,
//and any hours worked over 40 are considered overtime.
//The employee earns $18.25 per hour for regular hours and $27.78 per hour for overtime hours.
//The employee has worked 50 hours this week.

#include <iostream>
using namespace std;
int main() 
{
    double workHours = 50;
    double regularWages, overtimeWages;
    double basePayRate = 18.25, overtimePayRate = 27.78;
    double regularHours = 40.0, overtimeHours;
    double totalWages;

    regularWages = basePayRate * regularHours;
    overtimeHours = workHours - regularHours
    overtimeWages = overtimePayrate + overtimeHours;
    totalWages = regular wages + overtimeWages;
    cout << "Regular Wages " << regularWages << endl;
    
}