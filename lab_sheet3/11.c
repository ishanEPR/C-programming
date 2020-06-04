#include<stdio.h>
int main()
{
	float weight,height,BMI;
	printf("Please enter your weight(kg): ");
	scanf("%f",&weight);
    printf("Please enter your height(cm): ");
	scanf("%f",&height);	
	BMI=(height*height)/weight;
	printf("Your BMI is %f",BMI);
	
	
	  
 
 
if(BMI < 18.5){
	printf("Underweight");
}
else if(18.5 <= BMI< 25.0){
	
	printf("Normal weight");
}
else if(25.0 <= BMI < 30.0){
	
	printf("Overweight");
}
else if(30.0 <= BMI){
	
	printf("Obesity");
}

	
}
