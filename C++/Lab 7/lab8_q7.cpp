#include <iostream>
using namespace std;

 int main() 
{
int i, f=1,num;

cout << "insert no. " << endl;
cin >> num;

for ( i=1 ; i<=num ; i++)
   f = f*i;



cout << "fact = " << f;
return 0;
}
