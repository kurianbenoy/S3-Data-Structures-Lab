#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};


typedef struct Node node;


void main()
{
  struct Node *front = NULL,*rear = NULL,*temp,*front1,*head=NULL;
  int element,choice,count=0;

  while(1){
    printf("\n1)Inserting a Node \n2)Deleting a node  \n3)Print the queue \n4)Size of queue \n5)Exit");
    printf("\nEnter your choice \n");
    scanf("%d",&choice);
    
      switch (choice)
      {
        case 1: printf("Enter the element to insert \n");
                scanf("%d",&element);
                if (rear == NULL)
                {
                  rear = (node*)malloc(sizeof(node));
                  rear->next = front;
                  rear->data = element;
                  front = rear;
                 }
                 else{
                  temp = (node*)malloc(sizeof(node));
                  rear->next = temp;
                  temp ->data = element;
                  temp->next = front;
                  rear = temp;
                 }
                 count++;
                break;
        case 2:  front1 = front;
               
                  if (front1 == NULL)
                  {
                      printf("\n Error: Trying to display elements from empty queue");
                      return;
                  }
                  else
                      if (front1->next != NULL)
                      {
                          front1 = front1->next;
                          printf("\n Dequed value : %d", front1->data);
                          free(front);
                      }
                      else
                      {
                          printf("\n Dequed value : %d", front->data);
                          free(front);
                          front = NULL;
                          rear = NULL;
                      }
                      count--;
                break;
          case 3: temp = front;
          		  printf("%d->",temp->data);
          	
				  temp = temp->next;      
          		  

          		  while(temp!=front)
                  {
                    printf("%d->",temp->data);
                    temp=temp->next;
                  }

                  break;

          case 4:printf("No of elements : %d",count);
                 break;

          case 5: exit(7);
                  break;
      }
      
    }
}


