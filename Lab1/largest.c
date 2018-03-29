/*Number 6 of lab 1*/
#include <stdio.h>

void main(){

int a, b, c, m;

printf("Please enter three integers: ");
scanf("%d %d %d", &a, &b, &c);

m = a;

if (m < b)
   m = b;

if (m < c)
   m = c;

printf("The largest value of %d, %d and %d is %d\n", a, b, c, m);


}//main method
