#include<stdio.h>
#include <ctype.h>
#include<string.h>

#define MAX 100

int main(){
	char regNumber[MAX];
	
	printf("Enter reg number = \n");
	scanf("%s", &regNumber);
	
	int n = strlen(regNumber);
	//printf("%d", n);
	if(n==8){
		if(regNumber[0]=='S'){
			if(regNumber[1]=='/'&&regNumber[4]=='/'){
				if(isdigit(regNumber[2])&&isdigit(regNumber[3])){
					if(isdigit(regNumber[5])&&isdigit(regNumber[6])&&isdigit(regNumber[7])){
						printf("It is a valid register number\n");
					}
					else{
						printf("Invalid student number\n");
					}
				}
				else{
					printf("Invalid batch number\n");
				}
			}
			else{
				printf("Invalid register number\n");
			}
		}
		else{
			printf("Invalid first letter\n");
		}
	}
	else{
		printf("Reg number is less than or greater than 8\n");
	}
	
	return 0;
}
