#include<stdio.h>
int main()
{
	int n,i,sum,limit;
	printf("enter number= \n");
	scanf("%d",&limit);
	for(n=1;n<=limit;n++)
	{
	
	  sum=0;
	   for(i=1;i<n;i++)
	   {
      	if(n%i==0){
	    	sum=sum+i;
    	}
		
	  }
	 if(n==sum)
	 {
		printf("%d is a perfect number \n",n);
    	}

	}
	
}
