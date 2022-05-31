//Program Name:  lab2_prog2.cpp
//This program is able to calculate the perimeter and 
//area of a rectangular
#include <iostream>
using namespace std;

int main() 
{
    int length = 6, width = 8, perimeter, area;
        
    perimeter = 2 * (length + width);
    area = length * width;
    cout << "The perimeter is " << perimeter;
    cout << "The area is " << area;
    return 0;
}

