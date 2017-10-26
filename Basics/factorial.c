#include<stdio.h>

void main()
{
	int n,i,fact=1;
	printf("Enter the nth term\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
		fact+=fact*i;
	printf("Factorial of %d: %d",n,fact);
}