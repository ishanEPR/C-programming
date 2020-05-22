#include<stdio.h>
int add(int x,int y)
{
	int z=x+y;
	return z;
}
int multiply(int x,int y,int z)
{
	int w=x*y*z;
	return w;
}
int main()
{
	int r1,r2,r3;
	int (*ptr)(int,int);
	r1=add(10,20);
	r2=multiply(2,3,4);
	printf("%d\t %d\n",r1,r2);
	ptr=&add;
	r3=ptr(30,50);
	printf("%d",r3);
	
}
