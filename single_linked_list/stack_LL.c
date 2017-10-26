// A program using linked list to implement stack
#include "stdlib.h"
#include "stdio.h"


struct node{
  int data;
  struct node *next;
};


void main()
{
  struct node *temp, *first=NULL,*ptr=NULL;
  int choice,element,a=1,n=0;

  while(a==1){
    printf("\n1. Inserting a Node \n2)Deleting a node  \n3)Print the list \n");
    printf("Enter your choice \n");
    scanf("%d",&choice);
      switch (choice)
      {
        case 1: first = (struct node*)malloc(sizeof(struct node));
                printf("Enter the element\n");
                scanf("%d",&first->data);
                if (ptr == NULL ){
                  ptr = first;
                  first->next = NULL;
                }
                while(ptr != NULL)
                {
                  ptr = ptr->next;
                }
                ptr =first;
                ptr->next = NULL;
                break;
       case 2:  while(ptr != NULL){
                ptr = temp;
                ptr = ptr->next;
                }
                printf("Deleted element is %d",ptr->data);
                temp->next = NULL;
                free(ptr);
                break;
        case 3: while(ptr != NULL)
                {
                  printf("%d ->",ptr->data);
                  ptr = ptr->next;
                  n++;
                }
                break;

    }
    printf("To continue input 1:");
    scanf("%d",&a);
  }
}
