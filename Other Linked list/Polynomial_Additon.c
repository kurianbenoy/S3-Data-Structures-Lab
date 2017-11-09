/* Add 2 polynomial
using linked list
@Author : Kurian Benoy */

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int coeff;
	int pow;
	struct Node *next;
};

// Function to create new node
void create_node(int x,int y,struct Node **temp)
{
	struct Node *new,*z;
	z = *temp;
	if (z==NULL)
	{
		new = (struct Node*)malloc(sizeof(struct Node));
		new->coeff = x;
		new->pow = y;
		*temp = new;
		new->next = (struct Node*)malloc(sizeof(struct Node));
		new = new->next;
		new->next = NULL;
	}
	else
	{
		new->coeff=x;
		new->pow = y;
		new->next = (struct Node*)malloc(sizeof(struct Node));
		new = new->next;
		new->next = NULL;
	}
}

void print_poly(struct Node*);

void polyadd(struct Node *poly1, struct Node *poly2,struct Node *poly)
{
	while(poly1->next && poly2->next)
	{
		if(poly1->pow > poly2->pow)
		{
			poly->pow =poly1->pow;
			poly->coeff = poly1->coeff;
			poly1 = poly1->next ;
		}
		else if(poly1->pow<poly2->pow)
		{
			poly->pow = poly2->pow;
			poly->coeff = poly2->coeff;
			poly2 = poly2->next ;
		}
		else
		{
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff + poly2->coeff;
			poly1 = poly1->next;
			poly2 = poly2->next;
		}
		poly->next = (struct Node *)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
while(poly1->next || poly2->next)
    {
        if(poly1->next)
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if(poly2->next)
        {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        poly->next = (struct Node *)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
}


void main()
{
	struct Node *poly1=NULL, *poly2 = NULL, *poly = NULL;

	create_node(5,2,&poly1);
	create_node(3,1,&poly1);
	printf("Printing node 1\n");
	print_poly(poly1);

	create_node(9,3,&poly2);
	create_node(5,1,&poly2);
	create_node(3,0,&poly2);
	printf("\nSecond node is:\n");
	print_poly(poly2);

	poly = (struct Node*)malloc(sizeof(struct Node));

	polyadd(poly1,poly2,poly);
	printf("\nResultant Expression is :\n");
	print_poly(poly);	

}



void print_poly(struct Node *node)
{
	while(node->next != NULL)
	{
		printf("%dx^%d",node->coeff,node->pow);
		node = node->next;	
		if(node->next != NULL){
			printf("+");
		}
	}

}