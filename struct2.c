#include<stdio.h>
struct student{
	int sno;
	char sname[20];
	int smarks[4];
};
int main()
{
	struct student s[10];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("enter %d student details\n",i+1);
		printf("sno= ");
		scanf("%d",&s[i].sno);
		printf("\nsname= ");
		scanf("%s",&s[i].sname);
		for(j=0;j<4;j++)
		{
			printf("\nenter marks[%d]: ",j);
			scanf("%d",&s[i].smarks[j]);
		}
		
	}
}
