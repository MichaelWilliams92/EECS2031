/*Program q1 for lab 4*/

#include <stdio.h>

void main(){

int water = 100;
int mercury = 357;
int copper = 1187;
int silver = 2193;
int gold = 2660;

int x = 0;
scanf("%d", &x);
while(x >= 0){



	if(within_5_percent(water, x))
		printf("The substance is water\n");
	else if (within_5_percent(mercury, x))
		printf("The substance is mercury\n");
	else if (within_5_percent(copper, x))
		printf("The substance is copper\n");
	else if (within_5_percent(silver, x))
		printf("The substance is silver\n");
	else if (within_5_percent(gold, x))
		printf("The substance is gold\n");
	else
		printf("The substance is unknown\n");

	scanf("%d", &x);	

}//while loop
}//main method

int within_5_percent(int ref, int data){

if((ref*0.95 <= data) && (data <= ref*1.05))
	return 1;
else
	return 0;

}//within_5_percent method

