#include<stdio.h>
struct emp{
	int  eno;
	char ename[20];
	int esal;
};
int main()
{
	struct emp e;
	printf("sizeof=%d",sizeof(e));
	printf("sizeof emp=%d",sizeof(struct emp));
	
}
