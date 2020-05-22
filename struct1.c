#include<stdio.h>
struct emp{
	int eno;
	char ename[20];
	int esal;
};
int main()
{
	int i;
	struct emp e[10];
	for(i=0;i<10;i++)
	{
	printf("enter %d employee details\n",i+1);
	printf("enter eno=");
	scanf("%d",&e[i].eno);
	printf("\nenter ename=");
	scanf("%s",&e[i].ename);
	printf("\nenter esal=");
	scanf("%d",&e[i].esal);
	}
}
