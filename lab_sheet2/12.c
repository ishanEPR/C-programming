#include<stdio.h>
int main()
{
	float f_temperature,c_temperature;
	printf("Enter temperature in Celsius: ");
	scanf("%f",&c_temperature);
	f_temperature=c_temperature*9/5+32;
	printf("%f celsius value convert farebheit value: %.2f",c_temperature,f_temperature);

	

}
