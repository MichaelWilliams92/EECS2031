/*Question 4 of lab 2*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void main(){

int m = INT_MAX;
int c, n;
printf("Please enter a non-negative integer below %d: ", m); 
c = getchar();

if((c >= '0') && (c <= '9')){

	while(c != EOF && c != '\n'){
		n = n * 10 + (c - '0');
		c = getchar();
	}// while loop to determine number
	
	printf("The integer is %d\n", n);
	exit(1);
	}//end of if statement	
	else{

		printf("Error: input contains a non-digit character!\n");
		exit(1);
	
	}//else statement
	

}//main method
