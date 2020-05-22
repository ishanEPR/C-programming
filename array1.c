#include<stdio.h>
int main()
{
	int arr[5];
	int i,max;
	printf("enter array element \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		printf("array[%d]=%d\n",i,arr[i]);
		
	}
	max=arr[0];
	for(i=1;i<5;i++)
	{
	if(max<arr[i])
	{
		max=arr[i];
		
		}	
		
	}
	printf("max value is =%d",max);

}
