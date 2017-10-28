#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *prev,*next;
};

void main()
{
  struct Node *head = NULL;
  int choice,element,a=1,n=0;

  while(a==1){
    printf("\n1. Inserting a Node \n2)Deleting a node  \n3)Print the stack \n");
    printf("Enter your choice \n");
    scanf("%d",&choice);
    
      switch (choice)
      {
        case 1: first = (struct node*)malloc(sizeof(struct node));
        break;

      }
    }
}
