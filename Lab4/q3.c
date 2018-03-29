/*Problem 3 */

#include <stdio.h>
#include <math.h>

#define PI 3.1415926

float DegreeToRadian(float degree){

float radian = degree * (PI / 180);

return radian;

}//DegreeToRadian method

float factorial(int x){

int i;
float factor = 1.0;

for(i = 1; i <= x; i++)
	factor = factor * i; 

return factor;

}//factorial method

void main(){

float x, sum = 0, prev = 0, sinX = 0;
float E = 1.0;
float n;

printf("Please enter the degrees of an angle: ");
scanf("%f", &x);
//let n be the number of terms summed together
//sinX refers to the value of sin x at current n value
x = DegreeToRadian(x);

for(n = 0; fabs(E) > 0.000001; n++){
	if(n == 0){

		sinX += pow(-1, n) * pow(x, 2*n + 1) / factorial(2*n + 1);//taylor series equation
		prev = sinX;

	}//beginning of series
	else{

	sinX += pow(-1, n) * pow(x, 2*n + 1) / factorial(2*n + 1);//taylor series equation
	E = (sinX - prev) / prev;
	prev = sinX;

	}//computing taylor series
	

	

}//loop to get value of x

printf("The sine of the angle is: %.5f\n", sinX);

}//main method.  Why does This have to be on the bottom, and the other methods on top?



