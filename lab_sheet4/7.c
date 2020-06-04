#include<stdio.h>
#include<string.h>
long int sum;
char s;
int total_day=0;
int year,month,days;
int count_day(month)
{
	switch(month)
	{ sum=0;
		default :printf("\nEntered month is invalid");break;
		case 01:sum=31;return sum;break;
		case 02:sum=31+29;return sum;break;
		case 03:sum=31+29+31;return sum;break;
		case 04:sum=31+29+31+30;return sum;break;
		case 05:sum=31+29+31+30+31;return sum;break;
		case 06:sum=31+29+31+30+31+30;return sum;break;
		case 07:sum=31+29+31+30+31+30+31;return sum;break;
	//	case 08:sum=31+29+31+30+31+30+31+30;return sum;break;
	//	case 09:sum=31+29+31+30+31+30+31+30+31;return sum;break;
		case 10:sum=31+29+31+30+31+30+31+30+31+30;return sum;break;
		case 11:sum=31+29+31+30+31+30+31+30+31+30+31;return sum;break;
		case 12:sum=31+29+31+30+31+30+31+30+31+30+31+30;return sum;break;
		
	}
}

int main()
{
	char s;
	
	printf("Enter the born year:");
	scanf("%d",&year);
	printf("Enter the born month:");
	scanf("%d",&month);
	printf("Enter the born day:");
	scanf("%d",&days);
	printf("Your birth is:%d.%02d.%02d",year,month,days);
	printf("\nyou are male or female (m/f): ");
	scanf("%s",&s);
	int count=count_day(month);
	 total_day=count+days;

	if(s=='m')
	{
		printf("you are nic number is: %02d%03d",(year % 100),total_day);
	}
	else{
		printf("you are nic number is: %02d%03d",(year % 100),(total_day+500));
	}
	
}

