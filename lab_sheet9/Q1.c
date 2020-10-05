#include<stdio.h>
#include<stdlib.h>

struct detail{
    char reg[20];
    char name[50];
    int age;
}stu[5];

int main(){
	
    int i;
    for(i=0;i<5;i++){
    	
    	printf("Enter Student %d Details.\n",i+1);
        printf("Enter Student Registration No:");
        scanf("%s",&stu[i].reg);
        printf("Enter Student Name:");
        scanf("%s",&stu[i].name);
        printf("Enter Student Age:");
        scanf("%d",&stu[i].age);
        printf("\n");
    }

    FILE *fpointer;
    fpointer = fopen("Q1.txt","w");

    fprintf(fpointer,"StRe_no\t\tSt_Name\t\tSt_age\n");
    for(i=0;i<5;i++){
        fprintf(fpointer,"%s",stu[i].reg);
        fprintf(fpointer,"\t");
        fprintf(fpointer,"%s",stu[i].name);
        fprintf(fpointer,"\t\t");
        fprintf(fpointer,"%d",stu[i].age);
        fprintf(fpointer,"\n");
    }

    fclose(fpointer);
    
    return 0;

}


