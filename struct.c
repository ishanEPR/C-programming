#include<stdio.h>
struct emp{
	int eno;
	char ename[20];
	int esal;
};
int main()
{
struct emp e;
printf("enter employee details\n");
printf("employee number=\n");
scanf("%d",&e.eno);
printf("employee name=\n");
scanf("%s",&e.ename);
printf("employee salary=\n");
scanf("%d",&e.esal);	
}
