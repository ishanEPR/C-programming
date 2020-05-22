#include<stdio.h>
int main()
{
	int i=100;
	int* ptr;
	ptr=&i;
	printf("%d\n",i); //100
	printf("%u\n",ptr);//print the address of i
	printf("%u\n",&i);//address of i
	printf("%u\n",&ptr);//address of ptr
	printf("%d\n",*ptr);//100
	printf("%d\n",*(&i));

}
