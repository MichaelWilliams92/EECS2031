/*Problem 2 */

#include <stdio.h>

void main(){

int x = 0;
int factor;

while(x <= 1){
	printf("Enter an integer greater than 1: ");
	scanf("%d", &x);
}//while loop to get value greater than 1


if(smallestFactor(x) == 0)
	printf("%d is a prime\n", x);
else
	printf("The smallest factor of %d is %d\n", x, smallestFactor(x));


}//main method

int smallestFactor(int x){

int i, j;
for(i = 2; i < x; i++){

	j = x % i;

	if(j == 0)
		return i; //return first, or lowest factor found
	
}//for loop

return 0;//returns 0 if factor wasnt found


}//smallestFactor method
