#include<stdio.h>
#include<conio.h>
void addTwoNumbers(int*,int*);
int main()
{
	int num1,num2;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	addTwoNumbers(&num1,&num2);
}
void addTwoNumbers(int *a,int *b)
{
	int result=*a+*b;
	printf("Sum of two numbers= %d",result);
}
