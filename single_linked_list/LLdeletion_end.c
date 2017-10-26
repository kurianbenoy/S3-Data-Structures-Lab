#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


struct Node *head =NULL;

void delete_end()
{
    struct Node *ptr = head;
    struct Node *previous = head;
    if(ptr == NULL){
      printf("Element is not present in an array\n");
    }
    else{
      while(ptr->next != NULL ){
        previous = ptr;
        ptr = ptr->next;
        }
        if(ptr->next == NULL){
          previous ->next = NULL;
          printf("Deleted element is %d \n",ptr->data);
          free(ptr);
        }
    }
}

void delete(int no)
{
  struct Node *ptr = head, *prev = head;
  if (ptr == NULL){
      printf("Element is not present in an array");
  }
  else{
    while(ptr->data != no)
    {
      prev = ptr;
      ptr = ptr ->next;
    }
    if(ptr->data == no){
      prev->next = ptr->next;
      free(ptr);
      printf(" %d is deleted ",no);
    }
  }
}

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node =
        (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void printList(struct Node *head)
{
    while(head!=NULL)
    {
        printf("%d ->",head->data);
        head=head->next;
    }
    printf("\n");
}

/* Driver program to test above functions */
int main()
{

    int choice,element,a=1;

    while(a==1){
      printf("\n1. Insert the Node at Front\n2)Deleting Node at the end \n3) Deleting a node by key \n4) Printing the linked list \n");
      printf("Enter your choice \n");
      scanf("%d",&choice);
        switch (choice)
        {
          case 1: printf("Enter the element\n");
                  scanf("%d",&element);
                  push(&head,element);
                  break;
          case 2:
                    delete_end();
                    break;
          case 3: printf("Enter element to delete \n ");
                  scanf("%d",&element);
                  delete(element);

          case 4: printList(head);
                  break;

        }
      }

}
