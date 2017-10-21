#include<stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *head;
struct node *temp;

void insertFirst(int data) {
  struct node *link = (struct node*) malloc(sizeof(struct node));
  link->data = data;
  link->next = head->next;
  head->next = link;
}

void insertAtPos(int data, int pos)
{
	struct node *link = (struct node*) malloc(sizeof(struct node));
	int i;
	link->data = data;
	temp = head->next;
	for(i=0;i<pos-1;i++)
		temp=temp->next;
	link->next = temp->next;
	temp->next = link;
}

void display()
{
	temp = head->next;
	while(temp!=NULL)	
	{	printf("Data: %d\n",temp->data);
		temp = temp->next;
	}
}

int main()
{
	head = (struct node*) malloc(sizeof(struct node));
	head->next = NULL;
	int ch, dat, pos;
	do{
		printf("1.Add to front\n2.App to position\n3.Display all\n4.Exit");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:	printf("Enter data: ");
					scanf("%d", &dat);
					insertFirst(dat);
					break;
			case 2:	printf("Enter data: ");
					scanf("%d", &dat);
					printf("Enter position: ");
					scanf("%d", &pos);
					insertAtPos(dat, pos);
					break;		
			case 3:	display();
					break;
			case 4:	printf("Exiting..\n");
					break;
			default:printf("Error,try again..\n");
					break;
		}
	}while(ch!=4);
	return 0;
}