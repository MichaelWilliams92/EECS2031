/*problem 1 of Lab 3*/
#include <stdio.h>
#include <math.h>

void main(){

int N;
float A , r, payment;

int c = 0;

printf("Please enter the loan amount: ");
scanf("%f", &A);

while(A <= 0){

	printf("Invalid loan amount! Please enter a value greater than zero: ");
	scanf("%f", &A);

}//end of while loop, valid amount has been inserted into A

printf("Please enter the annual interest rate in percent: ");
scanf("%f", &r);

while(r <= 0 || r > 100){

	printf("Invalid rate! Please enter a value in the range of (0,100]: ");
	scanf("%f", &r);

}//end of while loop, valid amount has been inserted into r

printf("Please enter the length of the loan in years: ");
scanf("%d", &N);

while(N <= 0){

	printf("Invalid length! Please enter a positive integer: ");
	scanf("%d", &N);

}//end of while loop, valid amount has been inserted into N

/////////////////////////////////END OF WHILE LOOPS///////////////////////////////////////

float rate = r/1200;
float y = pow(1 + rate, -12 * N);
payment = A * (rate / (1 - y));

printf("The monthly payment is $%.2f\n", payment);

}//main method
