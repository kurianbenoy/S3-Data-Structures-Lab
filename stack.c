/*
 * C program to implement stack. Stack is a LIFO data structure.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

void push();
void pop();
void Display();

int stack[MAXSIZE];
int option=1,top=-1;


void main(int argc, char const *argv[])
	{
	// int choice;

	printf("STACK operation");

	while(option){

		int choice;
		printf("------------------------------------------------------------------------------------\n");
		printf("ENTER the option\n");
		printf("1)Push \n2)Pop \n3)Display \n4)Exit\n");
		printf("------------------------------------------------------------------------------------\n");		
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: push();
			 		break;
			case 2: pop();
					break;
			case 3: Display();
					break;
			case 4: exit(0);
		}
		printf("Do you want to continue :\n IF YES:1 \n Exit:0\n ----------------------------------------------------------\n");
		scanf("%d",&option);
	}
}

// Adding Element to Stack
void push()
{	int num;
	if (top ==(MAXSIZE-1)){
		printf("Stack is full of elements\n");
	}
	else{
		printf("ENTER the element to add\n");
		scanf("%d",&num);
		top = top+1;
		stack[top] = num;
	}
	return;
}

// Deleting element from the top of stack
void pop()
{
	if(top == -1){
		printf("Stack is EMPTY\n");
	}
	else{
		printf("Popped element is %d \n",stack[top]);
		top = top -1;
	}

	return;
}

//Displaying all elements of stack
void Display()
{	int i;
	if(top==-1){
		printf("Stack is EMPTY\n");
	}
	else{
		printf("elements of stack are :\n");
		for(i=0;i<=top;i++){
			printf("%d\n",stack[i] );
		}

	}
}
