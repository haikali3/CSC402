#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int max = 0, index = 0;
	float kml0,kml1,kml2,kml3,kml4;
	string car [ ] = {"BMW 32i", "Honda CRV", "Perodua Aruz", "Proton X70", "Toyota" };
	double km [ ] = { 100 , 80 , 85 , 90 , 70 };
	double litre [ ] = { 50 , 70 , 50 , 60 , 62 };
	

	cout << "Petrol Consumption" << endl;
	kml0 = sizeof(km)/sizeof(litre[0]);
	cout << "Car: " << car [0] << " drive " << kml0 <<" km per litre" <<endl;
	
	kml1 = sizeof(km)/sizeof(litre[1]);
	cout << "Car: " << car [1] << " drive " << kml1 <<" km per litre" << endl;
	
	kml2 = sizeof(km)/sizeof(litre[2]);
	cout << "Car: " << car [2] << " drive " << kml2 << " km per litre" <<endl;
	
	kml3 = sizeof(km)/sizeof(litre[3]);
	cout << "Car: " << car [3] << " drive " << kml3 <<" km per litre" << endl;
	
	kml4 = sizeof(km)/sizeof(litre[4]);
	cout << "Car: " << car [4] << " drive " << kml4 <<" km per litre" << endl << endl;

	int n = sizeof(km)/sizeof(litre[0]);
	
    for(int i = 0; i < n; i++)
	 {
      if (km[i] > max)
	   {
         max = km[i];
         index = i;
   		}
	}

	cout << "Car with the most efficient petrol consumption is "  << car[index] << " which is "<< max << " km " << endl << endl;
	
	return 0;
}
