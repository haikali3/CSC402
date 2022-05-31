/* program to calculate the area of square */
#include <iostream>
using namespace std;

int main() //function main begins program execution
{
   int square_area, square_width, square_length;

   cout << "Enter the width and length of square:";
   cin >> square_width;
   cin >> square_length;

   square_area = square_width * square_length;

   cout << "Area of Square: " << square_area << endl;
   return 0;
} // end main

