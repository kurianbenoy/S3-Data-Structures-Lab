#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void deque();

typedef struct Node node;


void main()
{
  struct Node *front = NULL,*rear = NULL,*temp;
  int element,choice;

  while(1){
    printf("\n1. Inserting a Node \n2)Deleting a node  \n3)Print the queue \n4)Exit");
    printf("\nEnter your choice \n");
    scanf("%d",&choice);
    
      switch (choice)
      {
        case 1: printf("Enter the element to insert \n");
                scanf("%d",&element);
                if (rear == NULL)
                {
                  rear = (node*)malloc(sizeof(node));
                  rear->next = NULL;
                  rear->data = element;
                  front = rear;            
                 }
                 else{
                  temp = (node*)malloc(sizeof(node));
                  rear->next = temp;
                  temp ->data = element;
                  temp->next = NULL;
                  rear = temp;            
                 }
                break;
        // case 2: deque();
                // break;

          case 3: temp = front;
                  while(temp != NULL)
                  {
                    printf("%d ->",temp->data);
                    temp = temp->next;
                  }

          case 4: exit(7);
                  break;
      }
      
    }
}



// void deque()
// {
//   struct Node * head = NULL, *prev;
//   while(head->next != NULL)
//   {

//   }

// }