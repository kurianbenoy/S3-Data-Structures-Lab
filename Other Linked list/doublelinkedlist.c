#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *left;
  struct Node *right;
};



void printList(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ->",head->data);
        head =head->right;
    }
}



void main()
{
  int choice,element,no;
  int i,value,key,k,flag=0;
  struct Node *head = NULL ,*ptr,*prev,*newptr,*ptr1,*previous,*sp,*sv ;

  printf("Enter the no of elements \n");
  scanf("%d",&no);
  int pos = 1;


  for(i=0;i<no;i++){
      ptr = (struct Node *)malloc(sizeof(struct Node));
      printf("Enter value to be inserted\n");
      scanf("%d", &ptr->data);
      if (head == NULL){
        head = ptr;
        head->left = NULL;
      }
      else{
        prev->right = ptr;
        ptr->left = prev;
      }
      prev = ptr;
  }


  while(1){
    printf("\n DOUBLE LINKED LIST \n1. Adding a node at Front\n2. Adding a node at the end \n3. Inseting a node at any position \n4)Deletion of linked list at front\n5)Deletion of linked list at any position \n6) Printing the linked list \n6)Exit");
    printf("\nEnter your choice \n");
    scanf("%d",&choice);
      switch (choice)
      {
        case 1: printf("INSERTION AT front\n");
                printf("Enter element to insert at front ");
                scanf("%d",&element);
                newptr = (struct Node*)malloc(sizeof(struct Node));
                newptr ->left = NULL;
                newptr ->right = head;
                newptr->data = element;
                head ->left = newptr;
                head = newptr;
                break;
        case 2:printf("INSERTION AT THE END \n");
               newptr = (struct Node*)malloc(sizeof(struct Node));
               printf("Enter the element to insert at end");
               scanf("%d",&newptr->data);
               while(ptr->right != NULL){
                 ptr = ptr->right;
               }
               // prev = head;
               if(ptr == NULL)
               {
                 ptr->right = newptr;
                 newptr->left = ptr;
                 newptr->right = NULL;
               }
               break;

        case 3:printf("INSERTION AT Any position in linked list \n");
               printf("Enter the position after which  element is inserted \n");
               scanf("%d",&key);
               newptr = (struct Node*)malloc(sizeof(struct Node));
               
               printf("Enter the element \n");
               scanf("%d",&newptr->data);

              if(key == 1)
              {
                newptr->left = NULL;
                newptr->right = ptr;
                head->left = newptr;
                head = newptr;
              } 

              else
              {
                while((ptr!=NULL)&&(pos<key))
                {
                  key++;
                  ptr1 = ptr;
                  ptr = ptr->right;
                  }
                 ptr1->right = newptr;
                 newptr->right = ptr;
                }
                
               break;
        case 4: ptr = head;
                
                if (ptr == NULL){
                        printf("Element is not present in an array");
                    }
                printf("Deleted value is:%d",ptr->data);
                head = head->right;
                free(ptr);
                head->left = NULL;
                break;
        case 5: printf("Enter the position after which  element is deleted \n");
               scanf("%d",&key);
               while(ptr->data != key)
               {
                  ptr =  ptr->right;
               }
               if(ptr->data = key)
               {
                  printf("Deleted element : %d \n",ptr->data);
                  sp = ptr->left;
                  sv = ptr->right;
                  sv->left = sp;
                  sp->right = sv;
                  free(ptr);
               }
               break;

        case 6: printList(head);
                break;
        case 7: exit(0);
                break;

        }
      
    }

}
