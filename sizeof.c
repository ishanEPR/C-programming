/*#include<stdio.h>

int main()
{
	char c;
	short s;
	printf("sizeof char: %d\n",sizeof(c));/////////sizeof function
	printf("sizeof short :%d\n",sizeof(s));
	printf("sizeof float :%d\n",sizeof(float));
	printf("sizeof double :%d\n",sizeof(double));
	printf("sizeof long double :%d\n",sizeof(long double));
}*/
///////////////limits.h////////
#include<stdio.h>
#include<limits.h>
int main()
{
	printf("signed short min value: %d\n",SHRT_MIN);
	printf("signed short max value: %d\n",SHRT_MAX);
	printf("unsigned short max value: %d\n",USHRT_MAX);
	printf("int min value: %d\n",LONG_MAX);
}
