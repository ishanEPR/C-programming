#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the if you want to value= \n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(n==sum)
	 printf("%d is a perfect number.",n);
	else
	  printf("% is not a perfect number.",n);
}
