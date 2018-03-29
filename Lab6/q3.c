/* Program 3 of lab 6*/

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){

int fifty = 0, twenty = 0, ten = 0, money = 0;

if (argc != 2 || atoi(argv[1]) % 10 != 0 || atoi(argv[1]) < 0 || !(isdigit(*argv[1]))  )
	printf("invalid input\n");

else{

	money = atoi(argv[1]);

	while(money >=50){
		fifty++;;
		money = money - 50;
	}//count 50s

	while(money >= 20){
		twenty++;
		money = money - 20;
	}//count 20s

	while(money >= 10){
		ten++;
		money = money - 10;
	}//count 10s

	printf("Number of $50 bills: %d\n", fifty);
	printf("Number of $20 bills: %d\n", twenty);
	printf("Number of $10 bills: %d\n", ten);

}//if input is valid

}//main method
