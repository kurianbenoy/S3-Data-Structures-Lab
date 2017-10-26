// Linked list insertion at the front

#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

void display(struct Node *temp)
{
    while(temp != NULL){
      printf("%d ->",temp->data);
      temp = temp ->next;
    }

}

void main()
{

  struct Node *head = NULL;
  int choice,element,a=1;

  while(a==1){
    printf("1. Insert the Node at Front\n 2) Print the list \n");
    printf("Enter your choice \n");
    scanf("%d",&choice);
      switch (choice)
      {
        case 1: printf("Enter the element\n");
                scanf("%d",&element);
                push(&head,element);
                break;
        case 2: display(head);
                break;

    }
    printf("To continue input 1\n\n");
    scanf("%d",&a);
  }
}
