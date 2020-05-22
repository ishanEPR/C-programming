#include<stdio.h>
int main()
{
	int temp,sum,r,i,n,fact;
	printf("enter the number= \n");
	scanf("%d",&n);
	temp=n;
	sum=0;
	
	while(n>0)
	{
		
	r=n%10;
	fact=1;
	for(i=r;i>=1;i--)
	{
		fact=fact*i;
	}
	sum=sum+fact;
	n=n/10;
	
	}
	n=temp;
	if(n==sum)
	{
		printf("%d is strong number",n);
		
	}
	else{
		printf("%d is not a strong number",n);
	}
}
