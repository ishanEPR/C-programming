#include<stdio.h>
#include<stdlib.h>

struct Employee{
    char Name[20];
    int EmpNo;
    float salary;
    float OT;
}emp[4];

int main(){
	
    char arr[500];
    FILE *fpointer;
    int i=0;
    float amount[4];
    float total=0;

    fpointer=fopen("data.txt","r");

    while(!feof(fpointer)){

        fgets(arr,500,fpointer);
        if(arr[i]!='\n'){
            fscanf(fpointer,"%s\t\t%d\t\t%f\t\t%f",&emp[i].Name,&emp[i].EmpNo,&emp[i].salary,&emp[i].OT);
        }
        i++;
    }

    fclose(fpointer);
     printf("Employee No\tBasic salary\tOT amount\tNet salary \n");
    for(i=0;(sizeof(emp)/sizeof(emp[0]))>i;i++){
        amount[i]=emp[i].salary+emp[i].salary*0.35+emp[i].OT*15;
        printf("%d\t\t%.2f\t%.2f\t\t%.2f\n",emp[i].EmpNo,emp[i].salary,emp[i].OT,amount[i]);
    }


    for(i=0;(sizeof(amount)/sizeof(amount[0]))>i;i++){
        total=total+amount[i];
    }

    printf("\nTotal Amount:%.2f",total);

}
