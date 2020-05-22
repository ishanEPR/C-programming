#include<stdio.h>
int stringLength(char[]);
int main()
{
	char str[30];
	printf("enter string=\n");
	gets(str);
	int len=stringLength(str);
	printf("length of array=%d",len);
}
int  stringLength(char x[])
{
	int i=0,count=0;
	while(x[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}
