#include<stdio.h>
#include<string.h>

int main()
{
	char str[30]={"ishan"};
	printf("enter string=%s \n",str);
//	scanf("%s",str);
	int i=0,temp;
	int j=strlen(str);
	//printf("length=%d\n",strlen(str));
	while(i<j)
	{
		//printf("string=%s\n",str);
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
		//printf("i=%d\n",i);
		printf("string=%s",str);
	}
	
}
