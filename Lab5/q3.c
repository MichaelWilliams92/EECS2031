/*program 3 of lab5*/

#include<stdio.h>

void swap(float *x, float *y){

float temp = *x;
*x = *y;
*y = temp;

}//swap method

void bubbleSort(float *array, int size){

int c, d;

for(c = 0; c < size-1; c++){
	for(d = 0; d < size-c-1; d++){
		if(array[d] > array[d+1])
			swap(&array[d], &array[d+1]);

	}//first for loop
}//second for loop


}//bubblesort method


void main(){

int n, i;
float *array;

printf("Please enter the number of values to be sorted: ");
scanf("%d", &n);

float x[n];
array = x;

printf("Please enter %d values: ", n);
for(i = 0; i < n; i++)
	scanf("%f", &x[i]);

bubbleSort(array, n);

printf("Sorted list in ascending order:\n");
for(i = 0; i < n; i++){
	if(i < n-1)
	printf("%.1f ", x[i]);
	else
	printf("%.1f", x[i]);
}//for loop
printf("\n");
	


}//main method
