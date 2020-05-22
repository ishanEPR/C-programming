#include<stdio.h>
int main()
{
	int limit,n,sum,fact,r,i,temp;
	printf("enter the range= \n");
	scanf("%d",&limit);
	for(n=1;n<=limit;n++)
	{
		sum=0;
		temp=n;
		while(n>0){
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
		if(n==sum){
			printf("\n%d is strong number",n);
		}
		
		
	}
}
