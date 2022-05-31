#include <iostream>
using namespace std;
int main() 
{	 

	int day;
	float hours,minutes,minute_day,minute_hour,total_minute;
	
	cout << "Days :" << endl;
	cin >> day;
	
	cout << "Hours :" << endl;
	cin >> hours;
	
	cout << "Minutes :" << endl;
	cin >> minutes;
	
			minute_day= day*24*60;
			minute_hour= hours*60;
			total_minute= minute_day+minute_hour+minutes;
			
	cout << " total: " << endl;
	cout << total_minute;
   return 0;
}
