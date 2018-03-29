/* Program 2 for Lab6 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(int argc, char *argv[]){

double operand1, operand2;
char operator;

operand1 = atof(argv[1]);
operand2 = atof(argv[3]);
operator = *argv[2];

if(argc !=4 || (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != 'X' && *argv[2] != 'x' && *argv[2] != '/') || strlen(argv[2]) != 1){

	printf("invalid input\n"); 

}//if something is wrong

else{
	if(operator == '+')
		printf("%.2f\n", operand1 + operand2);
	else if(operator == '-')
		printf("%.2f\n", operand1 - operand2);
	else if(operator == 'X' || operator == 'x')
		printf("%.2f\n", operand1 * operand2);
	else if(operator == '/')
		printf("%.2f\n", operand1 / operand2);
}//if everything is ok

}//main method
