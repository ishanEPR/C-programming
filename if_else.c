/*#include<stdio.h>
int main()
{
	int n;
	printf("enter number: ");
	scanf("%d",&n);
	if(n%2==0)
	 printf("\n%d is even number",n);
	else
	  printf("\n%d is odd number",n);
}*/
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		if(i%2==0){
			printf("\n%d is even",i);
		}
		else{
			printf("\n%d is odd",i);
		}
		i++;
	}
}
