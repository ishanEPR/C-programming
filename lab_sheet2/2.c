#include<stdio.h>
int main()
{
	int a=1;
	printf("a=%d\n",a);//a=1
	printf("a++=%d\n",a++);//output=1 now a=2
	printf("++a=%d\n",++a);//now a=3
	printf("a--=%d\n",a--);//post decrement now a=3 after a=2
	printf("--a=%d\n",--a);//mekata enna kalin a=2 but now a is 1
	
}
