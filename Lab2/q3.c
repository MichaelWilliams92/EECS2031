/* question 3 of lab2 */

#include <stdio.h>

void main(){

int c;

while((c = getchar()) != EOF){

while( c == '\t' || c == ' '){
	c = getchar();

	if(c != '\t' && c != ' ')
		putchar(' ');

}//if you find a space or tab

putchar(c);


}//while loop to go through each character


}//main method
