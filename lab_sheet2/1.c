#include<stdio.h>
int main()
{
	int a=1,b=2,c=3,d=4;
	float r1=(a+b)/(c+d);
	float r2=a+b/(c+d);
	float r3=(a+b)/c+d;
	float r4=a*b/c*d;
	
//first result
printf("result 1= %.2f\n",r1);
//second result
printf("result 2=%.2f\n",r2);

//third result
printf("result 3=%.2f\n",r3);

//fourth result
printf("result 4=%.2f\n",r4);
}
