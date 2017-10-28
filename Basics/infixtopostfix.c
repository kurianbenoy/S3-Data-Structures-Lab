#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stack
{
	int top;
	unsigned capacity;
	int *array;
};

int isOperand(char ch) //check if character is an operand
{
	return (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z');
}

void push (struct stack *stack1, char op) //add to stack the character
{
	stack1->array[++stack1->top] = op;
}

int isEmpty(struct stack *stack1) //check if empty
{
	return stack1->top == -1;
}

char peek(struct stack *stack1) //check what comes next
{
	return stack1->array[stack1->top];
}

char pop(struct stack *stack1) //delete an element
{
	if(!isEmpty(stack1))
		return stack1->array[stack1->top--];
	return '$';
}

int prec(char ch) //precedence order
{
	switch(ch)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
	}
	return -1;
}

struct stack* createStack(unsigned capacity) //to generate the stack
{
	struct stack *stack1 = (struct stack *)malloc(sizeof(struct stack));
	if(!stack1)
		return NULL;
	stack1->top = -1;
	stack1->capacity = capacity;
	stack1->array = (int *)malloc(stack1->capacity *sizeof(int));
	if(!stack1->array)
		return NULL;
	return stack1;
}

int InfixToPostfix(char *exp) //core program to generate the converted form
{
	int i, k;
	struct stack *stack1 = createStack(strlen(exp));
	if(!stack1)
		return -1;
	for(i=0, k=-1; exp[i]; i++)
	{
		if(isOperand(exp[i]))
			exp[++k] = exp[i];
		else if(exp[i]=='(')
			push(stack1,exp[i]);
		else if(exp[i]==')')
		{
			while(!isEmpty(stack1) && peek(stack1) != '(')
				exp[++k] = pop(stack1);
			if(!isEmpty(stack1) && peek(stack1) != '(')
				return -1;
			else
				pop(stack1);
		}
		else
		{
			while(!isEmpty(stack1) && prec(exp[i])<=prec(peek(stack1)))
				exp[++k] = pop(stack1);
			push(stack1, exp[i]);
		}
	}
	while(!isEmpty(stack1))
	{
		exp[++k] = pop(stack1);
	}
	exp[++k] = '\0';
	printf("%s\n", exp);
}

void main()
{
	char exp[30];
	printf("Enter the expression: ");
	scanf("%s", exp);
	InfixToPostfix(exp);
}
