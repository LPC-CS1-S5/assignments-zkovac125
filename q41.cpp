#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
  float radius, area, width, base, length, height;
  float circle_Area, rectangle_Area, triangle_Area;
  const float PI = 3.14159;
  int user_Choice;

  cout << "Geometry Calculator: \n" << endl;
  cout << "1. Calculate the Area of the Circle \n" << endl;
  cout << "2. Calculate the Area of the Rectangle \n" << endl;
  cout << "3. Calculate the Area of a Triangle \n" << endl;
  cout << "4. Quit \n" << endl;
  cout << "Enter your choice (1-4): " << endl;
  cin >> user_Choice;
  cout << endl;

  switch (user_Choice)
    {
      case 1:
            double radius;
            cout << "Enter the radius of the Circle\n";
            cin >> radius;
            if (radius < 0)
            {
               cout << "The radius must be positive. " << endl;
            }
            else
            {
              circle_Area= PI * radius * radius;
              cout << "The area of the circle is: " << circle_Area << endl;
            }
            break;

      case 2:
            cout << "Enter the length: \n";
            cin >> length;

            if (length > 0)
            {
              cout << "Enter the width: \n";
              cin >> width;

              if (width > 0) {
                 rectangle_Area = length * width;
                 cout << "The area of the rectangle is: " << rectangle_Area << endl;
              }
              else {
                cout << "Width must be positive." << endl;
              }
            }
            else
            {
              cout << "Length must be positive." << endl;
            }
            break;

      case 3:
           cout << "Enter the length of the base: \n";
           cin >> base;

           if (base > 0)
           {
             cout << "Enter the height: ";
             cin >> height;
             if (height > 0)
             {
               triangle_Area = base * height * 0.5;
               cout << "The area of the rectangle is: " << rectangle_Area << endl;
             }
             else
             {
               cout << "Height must be greater than 0" << endl;
             }
           }
           else
           {
             cout << "The base must be greater than 0" << endl;
           }
           break;

    case 4:
        cout << "Program Quit" << endl;
        break;
    default:
      cout << "Choice must be between 1-4." << endl;
     break;
  }
  
  cout << endl;

  return 0;

}