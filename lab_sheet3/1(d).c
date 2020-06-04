#include<stdio.h>

int main()
{
	int i,j,k;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=10;j++)
		{
		if(i==1||i==6){
		 printf("*");
		}
	
		
		if(j>1 &&j<10){
		 printf(" ");
		}else{
			printf("*");
		}
	
		
		}
			
		printf("\n");
	}
}
