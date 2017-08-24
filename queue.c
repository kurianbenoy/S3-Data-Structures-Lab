#include<stdio.h>
#include<stdlib.h>


# define MAX_SIZE 100

	void push();
	void dequeue();
	void display();

	int queue[MAX_SIZE];
	int front=-1,rear=-1;
	int option,choice=1;

void main()
{


	while(choice){
		printf("Enter queue operation \n1)PUSH into Queue \n2)DEQUEUE \n3)DISPLAY \n4)exit\n");
		scanf("%d",&option);
		switch(option){

			case 1: push();
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(43);
					break;
			default: printf("Your option is wrong\n");
					break;

		}
		printf("Do you want to continue	: 1 for Yes and 0 for NO ");
		scanf("%d",&choice);
	}
}

	void push(){
		int item;
		if(rear ==	MAX_SIZE-1)
			printf("Queue is full\n");
		else if(front==-1){
			front =0;
			rear=0;
			printf("ENTER THE element to insert\n");
			scanf("%d",&item);
			queue[rear]=item;
		}
		else{
			rear=rear+1;
			printf("ENTER THE element to insert\n");
			scanf("%d",&item);
			printf("%d %d",front,rear);
			queue[rear]= item;
			}
		}

	void dequeue(){
		if(rear==front)
			printf("The Queue is empty\n");
		else{
			printf("The deleted element is %d",queue[front]);
			front = front+1;
			return ;
			}
		}

	void display(){
		int i;
		for(i=front+1;i <=rear;i++)
			printf("%d \n",queue[i]);
		printf("\n");
	}
