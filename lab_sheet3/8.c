#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter the if you want to number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("\n%d is divisors by %d",n,i);
		}
	}
}
