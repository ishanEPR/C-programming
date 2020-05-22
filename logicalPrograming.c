#include<stdio.h>
int main()
{
	int n,r=0,sum=0;
	printf("enter the n value: \n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
		n--;
		
	}
	printf("sum=%d",sum);
}
