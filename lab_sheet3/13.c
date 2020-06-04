#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the if you want to number: ");
	scanf("%d",&n);
	int num=rand()%100;
    //printf("%d\t",num);
if(n>0 && n<100)
{
	printf("\nYou entered number is valid range");
	if(n>num)
	{
		int i;
		printf("\nyour enter value is higher value in generate number ");
		while(num>0)
		{
			printf("\n you can try aganin, Enter number: ");
			scanf("%d",&i); 
			//printf("\nNow you enter number is higher value ");
			if(i<num)
			{
				printf("\nNow you enter number is lower value ");
			}
			if(i==num)
			{
				printf("\nCongralutions you win");
				break;
			}
		}
	}
	else if(n<num)
	{
			printf("\nyour enter value is lower value in generate number ");
			int i;
				while(num>0)
		{
			printf("\n you can try aganin, Enter number: ");
			scanf("%d",&i); 
			if(i>num)
			{
				printf("\nNow you enter number is higher value ");
			}
			if(i==num)
			{
				printf("\nCongralutions you win");
				break;
			}
		}
		
	}
	else{
			printf("\nyour enter value is same value generate namber ");
			printf("Congralitions you win the game");
	}
	
}
else{
	printf("\nYou entered number isn't' valid range");
}

}
