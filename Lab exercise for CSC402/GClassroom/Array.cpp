#include <iostream>
#include<iomanip>
using namespace std;
int main()

{
	int i , count = 0;
	double sqrt[i];
	double length [4] = {30.0,45.7,60.0,30.5};
	cout << "N	X(length in cm)	square(X)" << endl;
	for (i=0; i<4 ;i++)
	{ sqrt[i] = length[i]*length[i];
	count++;
	
	
	std::cout << std::left <<std::setw(15)<<count<<std::setw(11)<<length[i]<<std::setw(5)<<sqrt[i]<<endl;
	}
}
