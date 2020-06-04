#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("Factorial of %d :%d\n",i,factorial(i));
	}
	
}
int factorial(int i)
{
	if(i<=1)
	{
		return 1;
	}
	else{
		
		
	return i*factorial(i-1);
		
	}
}
