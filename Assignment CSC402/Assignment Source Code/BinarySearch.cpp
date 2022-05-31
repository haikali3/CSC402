#include <iostream>
using namespace std;

int binarySearch(const int list[], int listLength, int searchItem);
void bubbleSort(int list[], int length);

int main() {
	int list[] = {2, 10, 17, 45, 49, 55, 85, 92, 98, 110};
	int listLength = 10;
	int i;
	cout << "[Bubble Sort]"
		 << endl;
	cout << "Before sorting, the list element are:"
		 << endl;
	
	for(i=0;i<listLength;i++){
		cout << list[i] << " ";
	}
	cout << endl;
	
	bubbleSort(list,listLength);
	
	cout << "After sorting, the list element are:"
		 << endl;
	
	for(i=0;i<listLength;i++){
		cout << list[i] << " ";
	}
	cout << endl << endl;;
	
	cout << "[Binary Search]"
		 << endl;	
	
	int searchItem;
	int itemFound;
	cout << "Choose an item or a number you want to search in the list : ";
	cin >> searchItem;
	
	itemFound =  binarySearch(list,listLength,searchItem);
	
	if(itemFound > -1){
		cout << "The item " << searchItem << " found at location " << itemFound << " in the list.";
	} else {
		cout << "The item is not found in the list";
	}
	
	return 0;
}

	void bubbleSort(int list[], int length)
	{
		int temp;
		int iteration;
		int index;
		for (iteration = 1; iteration < length; iteration++)
		{
			for (index = 0; index < length - iteration; index++)
				if (list[index] > list[index + 1])
				{
					temp = list[index];
					list[index] = list[index + 1];
					list[index + 1] = temp;
				}
		}
	}
	
	int binarySearch(const int list[], int listLength, int searchItem)
	{
		int first = 0;
		int last = listLength - 1;
		int mid;
		bool found = false;
		while (first <= last && !found)
		{
			mid = (first + last) / 2;
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
			return -1;
	}//end binarySearch

