#include<stdio.h>

int main()
{
	int n,i,sum=0;
	printf("enter n value= \n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(n==sum)
	{
		printf("it is perfect number %d ",sum);
	}
	else{
		printf("not a perfect ");
		
	}
}
