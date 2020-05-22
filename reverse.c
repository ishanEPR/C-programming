#include<stdio.h>
int main()
{
	int sum=0,n,r;
	printf("enter the number= \n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("reverse number is = %d",sum);
}
