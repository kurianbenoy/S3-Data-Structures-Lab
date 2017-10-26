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
  int choice,element,a=1,no;
  int i,value,key,k;
  struct Node *head = NULL ,*ptr,*prev,*newptr,*pnode ;

  printf("Enter the no of elements \n");
  scanf("%d",&no);


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


  while(a==1){
    printf("\n DOUBLE LINKED LIST \n1. Adding a node at Front\n2. Adding a node at the end \n3. Inseting a node at any position \n4) Printing the linked list \n");
    printf("Enter your choice \n");
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
               prev = head;
               if(ptr == NULL)
               {
                 ptr->right = newptr;
                 newptr->left = ptr;
                 newptr->right = NULL;
               }
               break;

        case 3:printf("INSETION AT ANY POSITION\n");
        pnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the position you would like to insert the value (1st element = position 1):");
        scanf("%d", &k);
        if(k<=0 )
        {
          printf("Position requested much beyond the permissible range");
          break;
        }
        i = 1;
        while(i<k)
        {
          ptr = ptr->right;
          i++;
        }
        // if(k == n+1)
        // {
        //   while(ptr->right!=NULL)
        //   {
        //     ptr = ptr->right;
        //   }
        //   pnode->right = NULL;
        //   pnode->left = ptr;
        //   ptr->right = pnode;
        // }
        while(1)
        {
          pnode->left = ptr->left;
          if(ptr->left != NULL)
            ptr->left->right = pnode;
          else
            head = pnode;
          pnode->right = ptr;
          ptr->left = pnode;
        }
        printf("Enter the value to be inserted: ");
        scanf("%d", &pnode->data);
        n++;
        break;

        case 4: printList(head);
                break;

      }
      printf("Do you want to continue \n");
      scanf("%d",&a);
    }

}
