#include<stdio.h>
int main()
{
	int a=10,b=20;
	printf("before swap value of a=%d\tb=%d\n",a,b);
	swap(10,20);
	printf("after swap value of a=%d\tb=%d\n",a,b);
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("after swap value of x=%d\ty=%d\n",x,y);
}
