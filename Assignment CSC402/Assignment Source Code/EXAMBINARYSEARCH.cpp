#include <iostream>
using namespace std;

copyGamma(int inStock[10][4],int gamma[4]);
copyAlphaBeta(int inStock[10][4],int alpha[20],int beta[20]);

int main()
{
    int inStock[10][4];
    int alpha[20];
    int beta[20];
    int gamma[4]={11,13,15,17};
    int delta[10]={3,5,2,6,10,9,7,11,1,8};
    
copyGamma( inStock[][], gamma[]);
copyAlphaBeta( inStock[][], alpha[], beta[]);

return 0;
}




 void copyGamma(int inStock[][],int gamma[])
	{
		for(int i=0;i<10;i++)
			for(int j=0;j<4;j++)
			
			if(i==0)
			inStock[i][j]= gamma[j];
			
			else
			inStock[i][j]=3*inStock[i-1][j];
	}

 void copyAlphaBeta(int inStock[10][4],int alpha[20],int beta[20])
		{
		
		for(int i=0;i<10;i++)
		for(j=0;j<4;j++)
		
			if(i<5)	
			inStock[i][j]=alpha[j];
			
			else	
			inStock[i][j]=beta[j];
		
		}


