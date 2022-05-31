
#include <iostream>
using namespace std;

main() 
{
    float sales,bonus,index,bonus_sales,bonus_rm,salary;
    cout << "Enter Sales in RM : ";
    cin >> sales;	
    cout << "Enter your monthy salary in RM : ";
    cin >> salary;
    
    if (sales > 200000)
    {
	
    bonus = 3.5/100;
    index = 2;
 }
	  
    else if (sales < 100000 || sales <= 2000000)
{
	
   	 	bonus = 2.5/100;
    	index = 1.5;
}
    		else if (sales < 50000 || sales <= 100000)
    	{
			
    			bonus = 1.5/100;
    			index = 1;
    	}
    			else if (sales < 50000 || sales <= 100000)
    		{
			
    				bonus = 1.5/100;
    				index = 1;
			}
    				else if (sales < 20000 || sales <= 50000)
    			{
				
    					bonus = 1.0/100;
    					index = 1;
    			}
    	    			else if (sales <= 20000)
    					{
						
    						bonus = 0.5/100;
    						index = 0.5;
    					}
    					
    bonus_sales = sales * bonus;
    bonus_rm = (salary*index) + bonus_sales;
    
    
    cout << "BONUS RM: " << bonus << endl;
    cout << "BONUS RM: " << index << endl;
        cout << "BONUS SALES: " << bonus_sales << endl;
        cout << "BONUS RM: " << bonus_rm << endl;
       
        
        
}

