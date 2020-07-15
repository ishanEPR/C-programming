#include<stdio.h>
int main()
{
	int n,arr[n],i;
	printf("Enter array size= ");
	scanf("%d",&n);
	int *ptr=&arr[0];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	
	}
	
	printf("Arrray elements= ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
		
	}
}
