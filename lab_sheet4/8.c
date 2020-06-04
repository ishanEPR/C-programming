#include<stdio.h>
int gcd(int a,int b)
{
	if(a==0||b==0)
	{
		return 0;
	}
	else if(a==b)
	{
		return a;
	}
	else if(a>b)
	{
		return gcd(a-b,b);
	}
	else{
		return gcd(a,b-a);
	}
}

int main() { 
   int a, b; 
   printf("Enter if you want to number: ");
   scanf("%d\t%d",&a,&b);
    
   printf("\nGCD of %d and %d is= %d",a,b,gcd(a,b));
   return 0; 
} 

