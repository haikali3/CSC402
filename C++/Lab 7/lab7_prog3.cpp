//Program Name:  lab7_prog3.cpp
//This program is to display the sequential number and the total //of numbers 
#include <iostream>

using namespace std;


int main(void){

    bool flag = true;
    int value;

    while(flag){
        cout << "Enter a numerical value: ";
        cin >> value;

        if(value % 3 == 0){
            flag = false;
        } else {
            cout << "That value is not divisible by 3." << endl;
        }
    }

    cout << value << " is divisible by 3." << endl;


    return 0;

}

