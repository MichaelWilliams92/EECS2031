/*Lab 7 Question 2*/

#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node *next;
}; 

main(){

int c;
scanf("%d", &c);

struct node *head;
struct node *temp;
head = NULL;

while(c > 0){

	if (head == NULL){
		
		head = malloc(sizeof(struct node));
		if(head == NULL){
			printf("Not enough memory\n");
			exit(1);
			}//if memory not available
			
		head->data = c;
		head->next = NULL;
		
	}//if list is empty
	
	else{
	
	if(c > head->data){
		
		struct node *x, *parent;
		temp = malloc(sizeof(struct node));
		if(temp == NULL){
			printf("Not enough memory\n");
			exit(1);
			}//if memory not available
		
		parent = head;
		x = head->next;
		//if x already points to null, add node to the end of the list, else traverse until we reach appropriate insertion point
		//change while loop so that loop terminates if x points to null
	
		
		while(x != NULL && c > x->data){
			x = x->next;
			parent = parent->next;
		}//look for place to insert node
		//when while loop terminates, both pointers are at appropriate place, or x points to null. check and change ->next value accordingly
		
		if (x == NULL){

		temp->data = c;
		temp->next = NULL;
		parent->next = temp;		

		}//if node is to be inserted at end of list

		else{

		temp->data = c;
		temp->next = x;
		parent->next = temp;

		}//if node is to be inserted somewhere in the middle
		
	}//if node is to be inserted within the list
	
	if(c <= head->data){
		
		temp = malloc(sizeof(struct node));
			if(temp == NULL){
			printf("Not enough memory\n");
			exit(1);
			}//if memory not available
			
		temp->data = c;
		temp->next = head;
		head = temp;
		
	}//if node is to be inserted at front of list
	
	}//if list is not empty

	scanf("%d", &c);

}//while input > 0

struct node *p;
p = head;

if(p == NULL)
	printf("The list is empty\n");
else{
	printf("The linked list is:\n");
	
	while(p !=NULL){
		
		printf("%d-->", p->data);
		temp = p;
		p = p->next;
		free(temp);
		
	}//print out elements of list
	
printf("NULL\n");
	
}//else statement



}//main 
