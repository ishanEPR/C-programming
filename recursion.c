#include<stdio.h>
int main()
{
	int n,result;
	printf("enter the n value= \n");
	scanf("%d",&n);
	result=fact(n);
	printf("%d is factoral value is= %d",n,result);
}
int fact(int n)
{
	int result;
	if(n==0)
	{
		result=1;
	}
	else{
		result=n*fact(n-1);
		
	}
	return result;
}
