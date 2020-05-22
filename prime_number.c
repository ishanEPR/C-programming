#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter value of n= ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count+=1;
		}
	}
	if(count==2)
	{
		printf("%d is prime number",n);
	}
	else{
		printf("%d is not a prime number",n);
	}
}
