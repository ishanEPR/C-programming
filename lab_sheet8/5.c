#include<stdio.h>
#include<string.h>

struct Marks{
	int Id_no;
	char name[30];
	int age;
	char address[50];
};
 void print_age14(struct Marks s[])
 {
 	int i;
 	for(i=0;i<12;i++)
 	{
 		if(s[i].age==14)
 		{
 			printf("%s is 14 years old\n",s[i].name);
		 }
	 }
 }
 
 void print_id_even(struct Marks s[])
 {
 	int i;
 	for(i=0;i<12;i++)
 	{
 		if(s[i].Id_no%2==0)
 		{
 			printf("%s has %d even id number\n",s[i].name,s[i].Id_no);
		 }
	 }
 }
 
 void search_details(struct Marks s[])
 {
 	int i;
 	printf("Please enter if you want to user's id number= ");
 	scanf("%d",&i);
 	printf("%d\t%s\t%d\t%s\n",s[i+1].Id_no,s[i+1].name,s[i+1].Id_no,s[i+1].address);
 
 }
int main()
{
	
int i;
struct Marks s[]={
{1,"Sunil",11,"Hunnadeniya,Matara"},
{2,"Nimal",12,"Kottegoda,Matara"},
{3,"Bimal",13,"Akuressa,Matara"},
{4,"Supun",14,"Gandara,Matara"},
{5,"Ishan",14,"Dickwella,Matara"},
{6,"Reshmika",13,"Godakawela,Matara"},
{7,"Malaka",11,"Devinuwara,Matara"},
{8,"Uvindu",14,"Godagama,Matara"},
{9,"Sajith",14,"Walasgala,Matara"},
{10,"Bandara",12,"Hakmana,Matara"},
{11,"Ravindu",13,"Morawaka,Matara"},
{12,"Kalana",14,"Walgama,Matara"}
};
printf("Details of 14 years old students\n");
print_age14(s);
printf("\n\n");

printf("Details of even id have students\n");
print_id_even(s);
printf("\n\n");

printf("Welcome, you can search students details\n");
search_details(s);
printf("\n\n");

}
