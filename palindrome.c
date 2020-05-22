#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("enter n value= \n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=temp;
	if(n==sum)
	 printf("%d is palindrome\n",sum);
	else
	 printf("%d is not a palindrome\n",sum);
}
