//Program Name:  lab5_prog6.cpp
//This program is to identify whether a customer can apply for
//credit card or not 
#include <iostream>
using namespace std;


main() 
{
    float basicSalary;
    const float LIMIT = 1500;
    cout << "Enter your basic salary in RM : ";
    cin >> basicSalary;
    if (basicSalary >= LIMIT)
        cout << "You are able to apply for credit card." << endl;
}


