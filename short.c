/*#include<stdio.h>
int main()
{
	short a=32769;  ////output=32767
	printf("a=",a);
}*/
/*#include<stdio.h>
int main()
{
unsigned short a=65545;  ////output=9,9
	printf("%u\n",a);// this is out of range 0-65535 so output should be 9 if a=65536, output 0,0	
	printf("%d",a);	
}*/
/*#include<stdio.h>
int main()
{
	unsigned short a=-32772;//output =32764
	printf("%u",a);//here,program run, output should be positive integer,-32772->32764
}*/
/////////////////// char////////////////
/*#include<stdio.h>
int main()
{
	char ch='A';
	printf("%c",ch);//output=A
	printf("%d",ch);//output=65 print the Ascii value
}*/
#include<stdio.h>
int main()
{
	char ch=258;
//	printf("%c",ch);//output=A
	printf("%d",ch);//output=65 print the Ascii value
}
