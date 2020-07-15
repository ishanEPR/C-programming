#include<stdio.h>

float totalOfElements(double array[15]){
	int i;
	float sum = 0;
	for(i=0; i<15; i++){
		sum = sum +  array[i];
	}
	return sum;
}

float averageOfElements(double array[15]){
	int i;
	float sum = 0;
	for(i=0; i<15; i++){
		sum = sum +  array[i];
	}
	float average = sum/15;
	
	return average;
}

float minimumValue(double array[15]){
	int i;
	float minValue = array[0];
	for(i=0; i<15; i++){
		if(minValue>array[i]){
			minValue = array[i];
		}
	}
	return minValue;
}

float maximumValue(double array[15]){
	int i;
	float maxValue = array[0];
	for(i=0; i<15; i++){
		if(maxValue<array[i]){
			maxValue = array[i];
		}
	}
	
	return maxValue;
}

float maximumNumberOfTimes(double array[15]){
	int maxCount = 0;
	float maxValue = array[0];
	int i, j;
	
	for(i=0; i<15; i++){
		int count =0;
		
		for(j=0; j<15; j++){
			if(array[j]==array[i]){
				count++;
			}
		}
		
		if(count>maxCount){
			maxCount = count;
			maxValue = array[i];
		}
	}
	
	return maxValue;
}

int main(){
	double array[15] = {34.5, 56.7, 12.6, 98.4, 54.21, 89.55, 
						54.2, 98.4, 73.2, 21.45, 34.5, 98.4,
						21.45, 98.4, 9.3};
//	int i;				
//	for(i=0; i<15; i++){
//		printf("%f\t", array[i]);
//	}

	float total = totalOfElements(array);
	printf("a) The total of elements is %.2f\n", total);
	
	float average = averageOfElements(array);
	printf("b) The average of elements is %.2f\n", average);
	
	float minimum = minimumValue(array);
	printf("c) The minimum value of array %.2f\n", minimum);
	
	float maximum = maximumValue(array);
	printf("d) The maximum value of array %.2f\n", maximum);
	
	float mode = maximumNumberOfTimes(array);
	printf("e) The element which appears the maximum number of times = %.2f\n", mode);
	return 0;
}
