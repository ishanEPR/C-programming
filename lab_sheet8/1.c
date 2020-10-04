#include<stdio.h>
#include<string.h>

struct student{
	int number;
	char name[30];
	int age;
	char address[50];
	int marks;
};
int main()
{
	struct student s[5];
	int i;

//1st student details	
	s[0].number=1;
	strcpy(s[0].name,"Ishan");
	s[0].age=23;
	strcpy(s[0].address,"Kottegoda, Matara");
	s[0].marks=56;

//2nd student details	
	s[1].number=2;
	strcpy(s[1].name,"Reshmika");
	s[1].age=23;
	strcpy(s[1].address,"Kottegoda, Dickwella");
	s[1].marks=60;
	
	//3rd student details	
	s[2].number=3;
	strcpy(s[2].name,"Ediriweera");
	s[2].age=22;
	strcpy(s[2].address,"Pathegama, Dickwella");
	s[2].marks=70;
	
	//4th student details	
	s[3].number=4;
	strcpy(s[3].name,"Dilshan");
	s[3].age=24;
	strcpy(s[3].address,"Habaraduwa, Galle");
	s[3].marks=80;

	//5th student details	
	s[4].number=5;
	strcpy(s[4].name,"Lakshitha");
	s[4].age=24;
	strcpy(s[4].address,"pitakotuwa,Colombo");
	s[4].marks=50;
	
	for(i=0;i<5;i++)
	{
	
		printf("%d student details..\n",i+1);
		printf("Number=%d\n",s[i].number);
		printf("Name=%s\n",s[i].name);
		printf("Age=%d\n",s[i].age);
		printf("Address=%s\n",s[i].address);
		printf("Marks in c=%d\n",s[i].marks);
		printf("\n");
		
	}
	
}
