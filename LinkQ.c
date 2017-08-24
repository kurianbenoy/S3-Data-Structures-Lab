#include <stdio.h>
#include <stdlib.h>
int ic;
 struct Node
{
 int data;
 struct Node *next;
};

 struct Node *front=NULL,*rear=NULL,*ptr=NULL;

 void Add()
{
 ptr=malloc(sizeof(struct Node));
 if(ptr==NULL)
 {
  printf("Failed to allocate memory.\n");
  return;
 }
 printf("Enter the element to be input: ");
 scanf("%d",ptr->data);
 ptr->next=NULL;
 if(front==NULL)//&&rear==NULL)
  front=rear=ptr;
 else
 {
  rear->next=ptr;
  rear=ptr;
  rear->next=NULL;
 }
}

 void Pop()
{
 if(front==NULL)
 {
  printf("\nUnderflow.\n");
  return;
 }
 printf("Do you want to delete the element %d ?",front->data);
 scanf("%d",&ic);
 if(ic==1)
 {
  if(front==rear)
  {
   front=rear=NULL;
   return;
  }
  ptr=front;
  front=front->next;
  free(ptr);
 }
 else return;
}

 void Traver()
{
 
