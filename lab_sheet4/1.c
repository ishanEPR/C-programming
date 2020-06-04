#include<stdio.h>
int sum=0;
int main()
{
	int a,b;
	printf("Please enter your two numbers: ");
	scanf("%d\t%d",&a,&b);
	addition(a,b);
	printf("Sum of the two numbers: %d",sum);
}
void addition(int a,int b)
{
	sum=a+b;
}
