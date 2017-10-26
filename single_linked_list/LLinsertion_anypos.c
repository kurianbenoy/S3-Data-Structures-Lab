// Linked list
// Inset a value into singly linked list after a particular postion
#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

struct Node *header, *ptr ,*temp;
// void Insert_after(struct Node *prev_node, int new_data){
//
//   if(prev_node == NULL)
//     printf("The given node is empty");
//
//   struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//
//   new_node->data = new_data;
//   new_node->next = prev_node->next;
//   prev_node->next = new_node;
// }

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}


void insert_any()
{
	int data_value, key;

	printf("\nEnter data of the node: ");
	scanf("%d", &data_value);
	printf("\nEnter data of the node after which new node is to be inserted: ");
	scanf("%d", &key);

	temp = (struct Node *) malloc(sizeof(struct Node));
	//Traverse till key is found or end of the linked list is reached.
	ptr = header;
	while(ptr->next != NULL && ptr->data != key)
	{
		ptr = ptr->next;
	}
	if(ptr->data == key)
	{
		temp->data = data_value;
		temp->next = ptr->next;
		ptr->next  = temp;
	}
	else
	{
		printf("\nValue %d not found\n",key);
	}
}

void display(struct Node *temp)
{
    while(temp != NULL){
      printf("%d ->",temp->data);
      temp = temp ->next;
    }

}


void main(){
  struct Node *head = NULL;
  int choice ,element,a=1,pos;

  while(a==1){
    printf("Enter Your choice \n1)Insert Node at first postion \n2) Insert after a node \n3 Print elements \n");
    printf("Enter your choice \n");
    scanf("%d",&choice);
      switch (choice){
        case 1:printf("Enter the element\n");
                scanf("%d",&element);
                push(&head,element);
                break;

        case 2: 
         printf("Enter previous Node position to insert\n");
                scanf("%d",&pos);
                printf("Enter the value\n ");
                scanf("%d",&element);
                Insert_after()
                break;
        case 3: display(head);
                break;



      }

  }


}
