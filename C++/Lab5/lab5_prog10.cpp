//Program Name:  lab5_prog10.cpp
//This program is to display the lower value 
#include <iostream>
using namespace std;

main() 
{
    int no1, no2, min;
    cout << "Enter the first value : ";
    cin >> no1;
    cout << "Enter the second value : ";
    cin >> no2;
    if (no1 < no2)
        {
		min = no1;
	}
    else 
	 {
	 min = no2;
}
    cout << "The lower value is " << min << endl;
}

