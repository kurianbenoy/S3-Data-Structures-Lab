/* A Dynamic C Program to implement single linked list:
1)Insertion at front
2)Insertion at Last
3)Deletion of element

Started coding by Kurian Benoy to understand Data Structures better  
*/

#include <stdio.h>
#include <malloc.h>

struct Node
{
	int info;
	struct Node *next;
};

typedef struct Node node;

node *Create_new_node(int n );
void insert_beg();
void insert_last();

node *ptr,*newptr,*temp;
node *front=NULL,*rear=NULL;

void main()
{
	int ch;
	char option ='y';

	while(option == 'y' || option == 'Y')
	{
		printf("Single Linked List Operations \n");
		printf("1)Insertion at the beginning of List \n");
		printf("2)Insertion at the END of List \n");
		printf("3) Deletion of the element from the end of list\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("Insertion at the beginning of NOde ...\n");
					insert_beg();
					break;
			case 2: printf("Insertion at the end of Node .....\n");
					insert_last();
					break;				
		}
		printf("Do you want to continue \n");
		scanf("%c",option);
	}

}



// Function to insert at the beginning
void insert_beg()
{
	int info;
	printf("ENter the information to be stored in the new node");
	scanf("%d",&info);
	newptr = Create_New_Node(int info);
	if(front ==NULL)
	{	
		front = rear = newptr;	
		front -> next = NULL;
		rear -> next = NULL;
	}
	else
	{
		temp = front;
		front = newptr;
		front -> next = temp;
	}
	printf("INSErted at the end\n");
	printf("Elements are :");
	while(ptr->next == NULL)
	{
		printf("%d ->",ptr->info);
		ptr = ptr ->next;

	}
}

//Function to insert at the end

void insert_last()
{	
	int info;
	printf("ENter the information to be stored in the new node");
	scanf("%d",&info);
	newptr = Create_New_Node(info);
	if(front == NULL)
	{
		front = rear = newptr;	
		front -> next = NULL;
		rear -> next = NULL;
	}
	else
	{
		rear ->next = newptr;
		rear = newptr;
		rear ->next = NULL;
	}
}



node* Create_New_Node(int n)
{
	newptr= (node*)malloc(sizeof(node));
	if(newptr == NULL)
	{
		printf("Memory is not allocated /n");
		return 0;
	}
	else
	{
		newptr ->info = n;
		newptr ->next = NULL;
		return newptr;
	}
}