#include <iostream>
using namespace std;

int main() 
{
    int count= 0,newsalary= 0,oldsalary=0,salary, avg;
    char opt='y';
    char name [10];
    
    while (opt == 'y') // evaluation based on sentinel value
    { 
       	
		cout << "Staff Name:"; 
        cin >> name;
        cout << "Staff Salary:";
        cin >> salary;
        newsalary=salary+newsalary;
		count++;
		cout << "y to continue ";
        cin >> opt;
    } 
    
    avg= newsalary/count;
    cout << "avg is " << avg;
return 0;
}

