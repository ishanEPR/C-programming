#include<stdio.h>
int main()
{
	int r,n,sum,temp,c;
	printf("enter number= ");
	scanf("%d",&n);
	temp=n;
	sum=0;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
		
		
	}
	n=temp;
	if(n==sum)
	 printf("%d is a armstrong\n",n);
	else 
	printf("%d is not a armstrong",n);
}
