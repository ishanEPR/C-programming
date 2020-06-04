#include<stdio.h>
int main()
{
	float height,feet,inches;
	printf("Enter your height(feet and inches): ");
	scanf("%f\t%f",&feet,&inches);
	printf("\nheight of feet=%.2f",feet);
	printf("\nheight of inches=%.2f",inches);
	height=feet*12+inches*2.54;
	printf("\nheight of a person in centimeters(cm)= %.2f",height);
	




	

}
