#include<stdio.h>
int main()
{
	////Volume of a cylinder
	
	float volume,radius=3.2,height=10.1;
	volume=3.14*radius*radius*height;
	printf("Volume of cylinder=%.2f\n",volume);
	
	///area of cylinder
	float area=2*3.14*radius*radius+2*3.14*radius*height;
	
	printf("Area of cylinder=%.2f\n",area);
}

