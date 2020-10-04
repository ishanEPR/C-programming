#include<stdio.h>
#include<string.h>

struct customer{
	char name[30];
	int accNmbr;
	int balance;

};
 
 
 void print_acount_less(struct customer s[])
 {
 	int i;
 	for(i=0;i<12;i++)
 	{
 		if(s[i].balance<200)
 		{
 			printf("%s has %d balance in their account\n",s[i].name,s[i].balance);
		 }
	 }
 }
 void print_acount_has1000(struct customer s[])
 {
 	int i;
 	for(i=0;i<12;i++)
 	{
 		if(s[i].balance>=1000)
 		{
 		
 			printf("Now, %s has %d balance in their account\n",s[i].name,s[i].balance+100);
		 }
	 }
 }
 
int main()
{
struct customer s[]={
{"Sunil",111,100},
{"Nimal",112,1000},
{"Bimal",113,1200},
{"Supun",114,200},
{"Ishan",115,300},
{"Reshmika",116,900},
{"Malaka",117,1300},
{"Uvindu",118,500},
{"Sajith",119,600},
{"Bandara",120,1500},
{"Ravindu",121,100},
{"Kalana",122,1900}
};
printf("Details of who has less than 200 balance per accounts\n");
print_acount_less(s);
printf("\n\n");

printf("Details of who has greater than 1000  balance per accounts\n");
print_acount_has1000(s);


}
