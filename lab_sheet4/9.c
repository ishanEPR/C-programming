#include<stdio.h>
#include<string.h>
#include<math.h>
int res=0;
int power(int a,int b)
{
	int i;
	printf("sum=");
	for(i=a;i<=b;i++)
	{
		
		printf("+%d*%d",i,i);	
	}
	
}
int main()
{
	int a,b;
	printf("Enter the given range: ");
	scanf("\n%d\t%d",&a,&b);
	power(a,b);
}
