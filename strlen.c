#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	unsigned int len;//length should be only positive integer
	printf("enter the string=\n");
	gets(str);
	len=strlen(str);
	printf("length of array='%d'",len);
}
