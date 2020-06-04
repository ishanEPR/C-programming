#include<stdio.h>

int main()
{
	int n;
	printf("Enter the page number: ");
	scanf("%d",&n);
	is_page(n);

}
void is_page(int n)
{
	if(n%2==0)
	{
		printf("\nYou entered page Right hand side");
	}
	else{
			printf("\nYou entered page Left hand side");
	}	
}
