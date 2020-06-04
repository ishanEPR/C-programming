#include<stdio.h>
int n;
int count()
{
int i;
for(i=1;i<=n;i++)
{
	if(i>=9){
		if(i==9){
		i=0;
		printf("\n count=%d",i);
		break;
		}
	printf("\ncount=%d",i);	}

		
	 
	else{
		printf("\ncount=%d",i);
	}
}
}
int main()
{
printf("Enter the if you want to number: ");
scanf("%d",&n);
count();
	
}
