//Program Name:  lab2_prog1.cpp
//This program is able to convert the weight from 
//kilogram to pound
#include <iostream>
using namespace std;

int main() 
{
    float weightInKg = 56.0;
    float weightInPound;
    
    weightInPound = weightInKg * 2.2;
    cout << "The weight in pounds is " << weightInPound;
    return 0;
}

