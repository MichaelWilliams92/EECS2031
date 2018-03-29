/*Problem 2 of Lab3*/

#include <stdio.h>

void main(){

int c = 0;
int i, j, temp;
int x[8];

printf("Please enter 8 integers: ");

for( i = 0; i < 8; i++){

	scanf("%d", &x[i]);

}////for loop to insert elements into array

for(i = 0; i < 8; i++){
	for(j = i + 1; j < 8; j++){
		if(x[i] > x[j]){
			temp = x[i];
			x[i] = x[j];
			x[j] = temp;

		}//if statement swapping max values
	}//nested for loop
}//for loop

printf("Sorted integers: ");
for(i = 7; i > 0; i--)
	printf("%d ", x[i]);

printf("%d\n", x[0]);



}//main method
