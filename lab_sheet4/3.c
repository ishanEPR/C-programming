#include<stdio.h>
#include<math.h>
float area,volume;

void areaOfCube(float a)
{
	area=6*a*a;
	printf("Area of cube: %f\n",area);
	
}
void volumeOfCube(float a)
{
	volume=a*a*a;
	printf("Volume of cube: %f",volume);
}
int main()
{
	areaOfCube(5);
	volumeOfCube(5);
	
}
