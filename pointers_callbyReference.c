#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a=10,b=20;
	printf("before swap a=%d\tb=%d\n",a,b);
	swap(&a,&b);
	printf("in the swap function \ta=%d\tb=%d\n",a,b);
	
}
void swap(int* x,int* y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("in the swap function \ta=%d\tb=%d\n",*x,*y);
}
