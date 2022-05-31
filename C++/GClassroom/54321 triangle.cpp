#include <iostream>
using namespace std;
int main()
{
	for (int row=5; row>1;row--)
	{
		for(int col=row;col>0;col--)
		{
		cout<<col<<"\t";
		}
		cout <<endl;
	}
}
