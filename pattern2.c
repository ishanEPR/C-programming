#include<stdio.h>
int main()
{
	/*int i,j;
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}*/
	int i,j,k;
for(i=1;i<=5;i++){
	for(j=i;j<5;j++){
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
		printf("*");
	}
	printf("\n");
}	
	
}
