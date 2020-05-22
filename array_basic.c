/*#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	printf("enter array element\n");
	for(i=0;i<5;i++)
	{
		
		scanf("%d",&arr[i]);
		printf("array[%d]=%d\n",i,arr[i]);
	}
	
}*/
#include<stdio.h>
int main()
{
	int arr[5],i,sum=0;
	printf("enter the element= \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		printf("array[%d]=%d\n",i,arr[i]);
		sum+=arr[i];
	}
	printf("sum of array element is=%d",sum);
}
