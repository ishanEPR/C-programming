#include<stdio.h>
int main()
{
	int num1,num2,*p,*q;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	p=&num1;
	q=&num2;
	if(*p>*q)
	{
	printf("Maximum value is %d",*p);
	}
	else{
	printf("Maximum value is %d",*q);
	}
}
