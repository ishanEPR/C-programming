#include<stdio.h>
int main()
{
	float minute,days,years;
	printf("Enter the if you want to years and days: ");
	scanf("%f\t%f",&years,&days);
	printf("\nyou entered year is=%.2f",years);
	printf("\nyou entered days=%.2f",days);
	
	minute=years*60*24*365+days*60*24;
	printf("\nyou entered all of minute is = %.2f",minute);
	




	

}
