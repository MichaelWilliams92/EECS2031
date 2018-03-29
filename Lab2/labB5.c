/* labB5 */

#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>

main(){

int c;

while((c = getchar()) != EOF){
	if (c == ' ' || c == '\n' || (c >="a" && c <= "z") || (c>="A" && c<= "Z")){

			if((c >="a" && c <= "z") || (c>="A" && c<= "Z"))
				printf("%c", toupper(c));
			else
				printf("%c", c);

	}//if statement

}//while loop


}//main method
