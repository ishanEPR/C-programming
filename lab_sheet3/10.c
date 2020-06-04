#include<stdio.h>

int main(){
	int n;
	
	printf("Enter the year:\n");
	scanf("%d",&n);
	if(n%4==0){
		
		if(n%100==0){
			if(n%400==0){
				printf("It is a Leap year\n");
				
			}
			else{
				printf("It is not a Leap year\n");
			}
		}
		else{
			if(n%4==0){
				printf("It is a Leap year\n");
			}
			else{
				printf("It is not a Leap year\n");
			}
			
		}
	}
	else{
		printf("It is not a Leap year\n");
	}
}
