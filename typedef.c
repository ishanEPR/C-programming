#include<stdio.h>
int main()
{
	/*typedef int my_int;
	my_int a=10,b=20,c;
	c=a+b;
	printf("sum=%d",c);*/
	typedef int Array[5];
	Array x={1,2,3,4,5};
	printf("Array elements\n");
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",x[i]);
	}
}
