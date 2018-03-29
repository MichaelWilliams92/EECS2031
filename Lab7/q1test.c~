/* Lab 7 Question 1 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){

char *name[] ={"January", "February", "March", "April", "May",
"June", "July", "August", "September", "October", "November",
"December"};

//char*name[] = {"Michael", "Sangeev", "Serling", "Syed", "Richard", "Catherine", "Ekram", "Joe", "Harvard", "Harvey", "Dent", "Jackass"};

int i = 0, j = 0, a = 0;
char b[10], *temp;
for(i = 0; i < 12; i++){
	strcpy(b, name[i]);
	//printf("name[3] at beginning of i loop = %s\n", name[3]);
	for(j = i + 1; j < 12; j++){

	//	printf("name[3] at beginning of jloop = %s\n", name[3]);
		if(strcmp(b, name[j]) > 0){
			strcpy(b, name[j]);
			//printf("b in jloop = %s\n", b); 
			a = j;
	//		printf("name[3] when new b value is found = %s\n", name[3]);
		}//if statement

	}//for loop to sort name array
	//printf("name[3] after j loop = %s\n", name[3]);
	
////////////////////////////////////////////////////////////////////////////////////////////////////////
	//printf("%s", temp);

	if(i == 11){a = 11;}

	temp = name[i];

	//printf("name[3] after making temp = %s\n", name[3]);

	//*temp = *(name + i);
	*(name + i) = *(name + a);
	//printf("name[3] after first part of swap = %s\n", name[3]);
	*(name + a) = temp;

	//printf("name[3] after second part of swap = %s\n", name[3]);

	//strcpy(temp, name[i]); //temp will store name[i]
	//name[i] = b;//will replace name[i] with b
	//name[a] = temp; //will replace name[a] with temp
	//this will effectively swap the 2 values

	//printf("%s\n", name[i]);

}//for loop to sort name array

for(i = 0; i < 12; i++)
	printf("%s\n", name[i]);


}//main method
