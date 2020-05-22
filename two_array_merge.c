#include<stdio.h>
int main()
{
	int a[10];int i,n,m;
	int b[3];
	printf("enter size \n");
	scanf("%d",&n);
	
	printf("1 st array element=\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter 2 nd array size\n ");
	scanf("%d",&m);
	printf("2 nd array element\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	int loc;
	printf("which location to insert in 1 st array\n");
	scanf("%d",&loc);
	for(i=n-1;i>=loc;i--)
	{
		
		a[i+m]=a[i];
		
	}
	
	for(i=0;i<m;i++)
	{
		a[loc+i]=b[i];
		
	}
	for(i=0;i<n+m;i++)
	{
		printf("print the array=%d\n",a[i]);
	}
	
}
