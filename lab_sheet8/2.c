/*#include<stdio.h>

struct distance{
	int feet;
	int inch;
}distance;

struct distance addDistance(struct distance n1,struct distance n2);
int main()
{
	struct distance n1,n2,result;
	
	printf("For 1st distance number \n");
    printf("Enter the feet and inch: ");
    scanf("%f %f", &n1.feet, &n1.inch);
    printf("\nFor 2nd distance number \n");
    printf("Enter the feet and inch: ");
    scanf("%f %f", &n2.feet, &n2.inch);
    
    result=addDistance(n1,n2);
    printf*=("")
	
}
struct distance addDistance(struct distance n1,struct distance n2) {
    struct distance temp;
    temp.feet = n1.feet + n2.feet;
    temp.inch = n1.inch + n2.inch;
    return (temp);
}*/

#include <stdio.h>
typedef struct complex {
    int real;
    int imag;
}complex;

void add(complex n1, complex n2);

int main() {
    complex n1, n2, result;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%d %d", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%d %d", &n2.real, &n2.imag);

    add(n1, n2);

    
    return 0;
}
void add(complex n1, complex n2) {
    complex temp;
    temp.imag = n1.imag + n2.imag;
    temp.real = n1.real + n2.real;
    if( temp.imag>12)
    {
    	printf("You entered distance, feet value= %d and inch value=%d", temp.real+1, temp.imag-12);
    	
	}
	else{
		printf("You entered distance, feet value= %d and inch value=%d", temp.real, temp.imag);
		
	}
    
    
    
}
