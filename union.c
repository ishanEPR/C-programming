#include<stdio.h>
/*union un{
	char c;
	short s;
	float f;
};
int main()
{
	union un var;
	printf("sizeof=%d",sizeof(var));
	printf("sizeof=%d",sizeof(union un));
}*/
union un{
	short a;
	short b;
	
};
int main()
{
	union un var;
	var.a=10;
	printf("b value=%d\n",var.b);
	var.b=20;
	printf("a value=%d\n",var.a);
}
