/*program 1 for lab5*/

#include<stdio.h>

void main(){

int x = 89;
double y = 167.9;
char z = 'H';

int *ex = &x;
double *why = &y;
char *zed = &z;

printf("The integer value is %d, its address is 0x%x, its memory size is %d bytes\n", x, &x, sizeof(x));

printf("The value of the integer pointer is 0x%x, its address is 0x%x, its memory size is %d bytes\n", ex, &ex, sizeof(ex));

printf("The double value is %lf, its address is 0x%x, its memory size is %d bytes\n", y, &y, sizeof(y));

printf("The value of the double pointer is 0x%x, its address is 0x%x, its memory size is %d bytes\n", why, &why, sizeof(why));

printf("The char value is %c, its address is 0x%x, its memory size is %d bytes\n", z, &z, sizeof(z));

printf("The value of the character pointer is 0x%x, its address is 0x%x, its memory size is %d bytes\n", zed, &zed, sizeof(zed));


}//main method
