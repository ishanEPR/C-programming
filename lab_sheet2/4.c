#include<stdio.h>
int main()
{
char C = 'B';
int i = 3, j = 3, k = 3;
double x = 0.0, y = 2.3; 
//a. i && j && k 
printf((i && j && k ) ? "true\n" : "false\n");
//b. x || i && j - 3 
printf((x || i && j - 3  ) ? "true\n" : "false\n");
//c. i < j && x < y 
printf((i < j && x < y  ) ? "true\n" : "false\n");
//d. i < j || x < y
printf((i < j || x < y ) ? "true\n" : "false\n");
//e. ‘A’ <= C && C <= ‘Z’ 

printf(('A' <= C && C <= 'Z' ) ? "true\n" : "false\n");
//f. C - 1 == ‘A’ || C + 1 == ‘Z’

printf((C - 1 == 'A' || C + 1 == 'Z') ? "true\n" : "false\n");
}
