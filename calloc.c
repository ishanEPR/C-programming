#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*arr;int i;
	printf("enter size of array= \n");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	if(arr==NULL)
	{
		printf("no memory");
	}
	else{
		printf("array elements\n");
		for( i=0;i<n;i++)
		{
			printf(" %d\n",*(arr+i));
		}
	}
}
