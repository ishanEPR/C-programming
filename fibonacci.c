#include<stdio.h>
int main()
{
	int a=0,b=1,c,n;
	int i;
	printf("enter the n value= ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
}
