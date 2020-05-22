#include<stdio.h>
#include<string.h>

void search(char* pat,char* txt)
{
	int n=strlen(txt);
	int m=strlen(pat);
	int i,j;
	for(i=0;i<=n-m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(txt[i+j]!=pat[j])
			{
				break;
			}
		}
		if(j==m)
		{
			printf("%d is value found",i);
		}
	}
}
int main()
{
	
		
	char txt[]="abcbaabbcaa";
	char pat[]="abb";
	search(pat,txt);
}
