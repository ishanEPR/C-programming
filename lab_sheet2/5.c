#include<stdio.h>
int main()
{
float x,result=1;
int n,i;
printf("Enter the if you want number: ");
scanf("%d",&n);
printf("\nNow you can enter x value: ");
scanf("%f",&x);
for(i=1;i<=n;i++)
{
	result*=x;
}
printf("\nResult is =%.2f",result);	
}
