#include<stdio.h>
struct emp{
	int eno;
	char ename[20];
	int esal;
};
int main()
{
	int* p;
	char* c;
	struct emp* sep;
	printf("size of int*=%d\n",sizeof(p));
	printf("sizeof char*=%d\n",sizeof(c));
	printf("sizeof emp*=%d\n",sizeof(sep));
}
