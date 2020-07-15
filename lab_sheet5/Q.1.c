#include<stdio.h>
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i,j;
	printf("\t\t\t\t******** MULTIPICATION TABLE ********\n\n");
	printf("		");
	for(i=0;i<10;i++){
		printf("%d	",arr[i]);
	}
	printf("\n");
	printf("		");
	for(i=0;i<10;i++){
		printf("~	");
	}
	printf("\n");
	for(j=1;j<=10;j++){
		printf("\n");
		printf("   %d >		",j);
		for(i=0;i<10;i++){
				printf("%d	",j*arr[i]);
		}
		printf("\n");
		printf("	    ");
		
		
			for(i=0;i<10;i++){
				printf("--------");
			
		}
	}

	return 0;
}
