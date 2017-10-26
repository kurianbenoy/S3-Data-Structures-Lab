// Joels Program

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *llink;
	struct node *rlink;
};

int main()
{
	struct node *p, *ptr, *head = NULL, *pnode;
	int i, ch, n, k;
	printf("Enter the number of values to input in the doubly linked list: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		ptr = (struct node *)malloc(sizeof(struct node));
		printf("Enter the element: ");
		scanf("%d", &ptr->data);
		ptr->rlink = NULL;
		if(head == NULL)
		{
			head = ptr;
			head->llink = NULL;
		}
		else
		{
			p->rlink = ptr;
			ptr->llink = p;
		}
		p = ptr;
	}
	while(1)
	{
			printf("\n----MENU----\n1. Add a node at first position\n2. Enter a node at any position\n3. Enter a node at last position\n4. Delete a node\n5. Display\n6. Number of nodes\n7. Exit\nChoice: ");
			scanf("%d", &ch);
			ptr = head;
			pnode = head;
			switch(ch)
			{
				case 1: //add a node at first position
					pnode = (struct node *)malloc(sizeof(struct node));
					printf("Enter the value to be inserted at first position: ");
					scanf("%d", &pnode->data);
					pnode->llink = NULL;
					pnode->rlink = head;
					head->llink = pnode;
					head = pnode;
					n++;
					break;

				case 2: //add a node at any position
					pnode = (struct node *)malloc(sizeof(struct node));
					printf("Enter the position you would like to insert the value (1st element = position 1):");
					scanf("%d", &k);
					if(k<=0 || k>n+1)
					{
						printf("Position requested much beyond the permissible range");
						break;
					}
					i = 1;
					while(i<k && k!=n+1)
					{
						ptr = ptr->rlink;
						i++;
					}
					if(k == n+1)
					{
						while(ptr->rlink!=NULL)
						{
							ptr = ptr->rlink;
						}
						pnode->rlink = NULL;
						pnode->llink = ptr;
						ptr->rlink = pnode;
					}
					else
					{
						pnode->llink = ptr->llink;
						if(ptr->llink != NULL)
							ptr->llink->rlink = pnode;
						else
							head = pnode;
						pnode->rlink = ptr;
						ptr->llink = pnode;
					}
					printf("Enter the value to be inserted: ");
					scanf("%d", &pnode->data);
					n++;
					break;

				case 3: //add a node at the end
					pnode = (struct node *)malloc(sizeof(struct node));
					while(ptr->rlink!=NULL)
						ptr = ptr->rlink;
					printf("Enter the value to be inserted at the last position: ");
					scanf("%d", &pnode->data);
					pnode->rlink = NULL;
					pnode->llink = ptr;
					ptr->rlink = pnode;
					n++;
					break;
				case 4: //delete a node at any position
					printf("Enter the position number that you would like to delete: ");
					scanf("%d", &k);
					if(k<=0 || k>n+1)
					{
						printf("Requested position much beyond the permissible range");
						break;
					}
					i=1;
					while(i<k)
					{
						ptr = ptr->rlink;
						pnode = ptr->llink;
						i++;
					}
					pnode->rlink = ptr->rlink;
					if(pnode->rlink != NULL)
						ptr->rlink->llink = pnode;
					if(ptr->llink == NULL)
					{
						ptr->rlink->llink = NULL;
						head = ptr->rlink;
					}
					free(ptr);
					n--;
					break;
				case 5: //display the doubly linked list
					printf("<--> ");
					while(ptr != NULL)
					{
						printf(" %d <--> ", ptr->data);
						ptr = ptr->rlink;
					}
					break;
				case 6: //count no of nodes
					printf("No. of nodes in the doubly linked list: %d", n);
					break;
				case 7: //exit
					printf("\nEnd\n");
					exit(0);
				default://invalid entry
					printf("Invalid Entry\n");
		}
	}
}
