#include<stdio.h>

int main()
{
	int n,i,j,count=0;
	printf("If you want to range, you can enter the number: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the range in value: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);	
	}
	for(j=0;j<n;j++)
	{
		printf("%d\t",arr[j]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]/10==2 ||arr[i]%10==2)
		{
			count++;
		}
	}
	printf("\nthere is %d number of 2s in given range of integers",count);
		
}
