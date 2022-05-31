//Program Name:  lab5_prog9.cpp
//This program displays a message based on the water bill amount. 
#include <iostream>
using namespace std;
main() 
{
    float bill, discount, payment;
    cout << "Enter the water bill amount : ";
    cin >> bill;	
    if (bill >= 500 && bill < 1000)
    {
        cout << "You will receive a 1.5% discount." << endl;
	 discount = bill * 1.5;
    }
    else
    {
        cout << "You will receive a 0.5% discount." << endl;
        discount = bill * 0.5;
    }
    payment = bill - discount;
    cout << "You have to pay only RM " << payment << endl;
}

