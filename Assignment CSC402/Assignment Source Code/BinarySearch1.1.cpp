#include <iostream>
using namespace std;

int main(){
	
	int list[] = {2,10,17,45,49,55,68,85,92,98}
	int listLength = 10;
	
	
	cout << "Current list element:" << endl;
	
	for( int i=0;i<listLength;i++){
		cout << list[i] << " ";
	}
	cout << endl;
	
	
return;
}

void bubbleSort ( int list[] , int length ) {
	int loop, index, temp;
	
	 for (loop = 1 ; loop < length ; loop++) {
	 
		for (index = 0; index < length - loop; index)
		
			if ( list[index]  > list [index + 1] ) {
					temp = list [index];
					list[index] = list[index + 1];
					list[index + 1] = temp;
			}	
			
	 }
}

int binarySearch ()
	int left = 0;
		int right = listLength - 1;
		int mid;
		bool found = false;
		while (left <= right && !found)
		{
			mid = (left + right) / 2;
			if (list[mid] == searchItem)
				found = true;
			else if (list[mid] > searchItem)
				last = mid - 1;
			else
				first = mid + 1;
		}
		if (found)
			return mid;
		else
			return 0;
		}
