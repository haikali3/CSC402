#include <iostream>
#include<string>
#include<iomanip>
#include <string>
using namespace std;
int main()
{
	
	int choice, qty,counter;
	int itemID,pOrdered,pInStore,pSold;
	string itemName;
	double manufPrice,sellingPrice;
	
		int arritemID[99],arrpOrdered[99],arrpInStore[99],arrpSold[99];
		
while (choice !=4) {
	{
	cout << endl;
		cout << endl;
			cout << endl;
	cout << " Insert input" << endl ;
	cout << " 1. Insert item" << endl ;
	cout << " 2. Sell item" << endl ;
	cout << " 3. Print item" << endl ;
	cout << " 4. End program" << endl ;
	cout << " Enter: " ;
	cin >> choice ;
	
	
	switch (choice)
		{
		
	case 1:	
	
	cout << "How many items would to like to enter?" << endl;
	cout << ">>";
	cin << amount_of_item << endl;
	
	cout << "Insert " << amount_of_item << " items " << endl;
	for (x = 0; x <= amount_of_item; x++)
	{
		cout << endl;
		cout << "Insert itemID: " ;
		cin >> itemID ; 
		cout << "Insert itemName: " ;
		cin >> itemName ; 
		cout << "Insert pOrdered: " ;
		cin >> pOrdered ; 
		cout << "Insert pInStore: " ;
		cin >> pInStore ; 
		cout << "Insert pSold: " ;
		cin >> pSold ; 
		cout << "Insert manufPrice: " ;
		cin >> manufPrice ; 
		cout << "Insert sellingPrice: " ;
		cin >> sellingPrice ; 
		cout << endl;
	}
	arritemID[99]=itemID;
	
	
		cout << "itemID itemName     pOrdered   pInStore     pSold      manufPrice    sellingPrice" << endl;
		cout << itemID << setw(9) << itemName << setw(12) <<  pOrdered  << setw(12) << pInStore << setw(12)  <<  pSold << setw(12)  << manufPrice << setw(15)  << sellingPrice;
	break;
	
	case 2:
		
		cout << "Insert itemID: " ;
		cin >> itemID ; 
			
			cout << "Enter quantity: " ;
			cin >> qty;
			
			pOrdered -= qty;
			pSold += qty;
			
			cout << "itemID itemName     pOrdered   pInStore     pSold      manufPrice    sellingPrice" << endl;
			cout << itemID << setw(9) << itemName << setw(12) <<  pOrdered  << setw(12) << pInStore << setw(12)  <<  pSold << setw(12)  << manufPrice << setw(15)  << sellingPrice;
			break;
	
	case 3:
		cout << endl;
		cout << "itemID itemName     pOrdered   pInStore     pSold      manufPrice    sellingPrice" << endl;
		
		cout << itemID << setw(9) << itemName << setw(12) <<  pOrdered  << setw(12) << pInStore << setw(12)  <<  pSold << setw(12)  << manufPrice << setw(15)  << sellingPrice;	
		break;	
		}
	}
	

}
	return 0;
	
}

