//Program Name:  lab7_prog4.cpp
#include <iostream>
using namespace std;

main() 
{
    int i = 15, sum = 1; //sum = 0
    while(i <= 27)
    {
        if (i % 3 == 0)
            sum = sum + i ;
        cout << i << " ";
        i = i + 2;
    }
    cout << sum << endl; //105 is not 64
}

