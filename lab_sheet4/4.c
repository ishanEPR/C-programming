#include<stdio.h>

void run_Rate(int n,int m)
{
	float runR=n/m;
	printf("Run Rate= %.2f",runR);
}
int main()
{
	int n,m;
	printf("\ngot marks:");
	scanf("%d",&n);
	printf("How many overs if you want= ");
	scanf("%d",&m);

	run_Rate(n,m);
}

