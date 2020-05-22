#include<stdio.h>
#include<stdlib.h>
struct emp{
	int eno;
	char ename[20];
	int esal;
};
int main()
{
	struct emp* ptr;
	ptr=(struct emp*)malloc(sizeof(ptr));
	if(ptr==NULL)
	{
		printf("memory out of erro\n");
	}
	else{
		printf("enter employee details\n");
		scanf("%d\n%s\n%d\n",&ptr->eno,ptr->ename,&ptr->esal);
	}
}
