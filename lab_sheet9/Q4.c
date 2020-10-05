#include<stdio.h>
#include<string.h>

struct word{
    int a;
    int e;
    int i;
    int o;
    int u;
    int other;
};

int main()
{
    struct word W;
    char arr[100];
    FILE * fpointer;
    int i;

    fpointer = fopen("myword.txt","a");
    printf("Enter your word: ");
    gets(arr);
    fprintf(fpointer,arr);

    W.a = 0;
    W.e = 0;
    W.i = 0;
    W.o = 0;
    W.u = 0;
    W.other = 0;

    for(i=0;strlen(arr)>i;i++){

        if(arr[i]=='a'||arr[i]=='A'){
            W.a=W.a + 1;
        }

        if(arr[i]=='e'||arr[i]=='E'){
            W.e=W.e+1;
        }

        if(arr[i]=='i'||arr[i]=='I'){
            W.i=W.i+1;
        }

        if(arr[i]=='o'||arr[i]=='O'){
            W.o=W.o+1;
        }

        if(arr[i]=='u'||arr[i]=='U'){
            W.u=W.u+1;
        }

        if(arr[i] !='a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o'&& arr[i] != 'u' && arr[i] != 'A' && arr[i] != 'E' && arr[i] != 'I' && arr[i] != 'O' && arr[i] != 'U' ){
            W.other=W.other+1;
        }

    }
    fprintf(fpointer,"\t\t%d\t%d\t%d\t%d\t%d\t%d\t%d",W.a,W.e,W.i,W.o,W.u,W.other,strlen(arr));
    fclose(fpointer);

    fpointer=fopen("myword.txt","a");
    fprintf(fpointer,"\n");
    fclose(fpointer);
}
