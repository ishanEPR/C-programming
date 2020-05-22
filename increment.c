#include<stdio.h>
int main()
{
	int x=10,y=20,z;
	z=x++*--y;
	printf("%d\t%d\t%d",x,y,z);
	int a=5;
	a=a+++a;
	printf("%d",a);
}
