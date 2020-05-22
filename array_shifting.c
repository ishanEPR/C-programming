#include<stdio.h>
int main()
{
	int a[50],n,i,key,loc;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter %d elements in array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the insert to value\n");
	scanf("%d",&key);
	printf("insert to which location\n");
	scanf("%d",&loc);
	for(i=n-1;i>=loc;i--)
	{
		a[i+1]=a[i];
	}
	a[loc]=key;
	for(i=0;i<=n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	
}
