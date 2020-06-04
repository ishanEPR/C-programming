#include<stdio.h>

int main()
{
	int A,B,C;
	scanf("%d\t%d\t%d",&A,&B,&C);
	float disc,deno,x1,x2;
	disc=(B * B) - (4 * A * C);
	deno = 2 * A;
	
	if( disc > 0 )
	{
		printf("THE ROOTS ARE REAL ROOTS");
		x1=(-B/deno)+(sqrt(disc)/deno);
		x2=(-B/deno)-(sqrt(disc)/deno);
		
		printf("\nx1= %f",x1);
		printf("\nx2= %f",x2);
	}
	else if(disc==0)
	{
	printf("THE ROOTS ARE REPEATED ROOTS");
	x1=(-B/deno);
	printf("\nx1= %f",x1);	
	}
	else{
			printf("THE ROOTS ARE IMAGINARY ROOTS");
	}
}
