/*Problem 3 ofLab 3*/
#include <stdio.h>

void main(){

int x[9];
int i;
for(i = 0; i < 9; i++)
	x[i] = 0;

float c = 0.0;

int salary;	

while(c >= 0){
	scanf("%f", &c);
	salary = 200 + (c * 0.09);

	if(salary < 1000)
		x[(salary / 100) - 2]++;
	else
		x[8]++;

}//while loop

for( i = 0; i < 8; i ++)
printf("$%d00-%d99: %d\n", i + 2, i + 2, x[i]);

printf("$1000 and over: %d\n", x[8]);

}//main method
