#include<stdio.h>
int main()
{
	float surface_area,outer_radius=7,inner_radius=5,outer_area,inner_area;
	
	inner_area=3.14*inner_radius*inner_radius;
	outer_area=3.14*outer_radius*outer_radius;
	
	
	printf("Area of a inner disk=%.2f\n",inner_area);
	printf("Area of a outer disk=%.2f\n",outer_area);
	
	surface_area=outer_area-inner_area;
	printf("Area of a surface  disk=%.2f\n",surface_area);
	
}

