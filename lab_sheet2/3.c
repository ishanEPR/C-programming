#include<stdio.h>
int main()
{
int m = 40;
int n = 20;
int o = 20;
int p = 30;	

//(m>n and m !=0)40>20 && 40!=0 true
if(m>n && m !=0){
	printf("1\n");
}
else{
	printf("0\n");
}

//(o>p or p!=20) 
if(o>p || p!=20){
	printf("1\n");
}
else{
	printf("0\n");
}

//(not (m>n and m !=0)) 

if(!(m>n && m !=0)){
	printf("1\n");
}
else{
	printf("0\n");
}

}
