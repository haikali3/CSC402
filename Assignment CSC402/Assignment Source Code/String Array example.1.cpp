#include <iostream>
#include<string>

using namespace std;
int main()

{
	char name[20],sport[20];

	
	cin.getline(name, 20) >> name;
	cin.getline(sport, 20) >> sport;
	
	cout << name << sport << endl;
	
	cin.get();
	return 0;
	
}
