//Program to process a stack, based on arrays.
#include <stdio.h>
#include <stdlib.h>
 int A[10],i,n=-1,ch;

 void  Add()
{
 if(n<10)
 {
  printf("\nEnter the value:");
  scanf("%d",&A[++n]);
 }
 else printf("\nStack Overflow\n");
}

 void Delete()
{
 if(n>=0)
 {
  printf("\nDo you want to delete the element %d ?\n",A[n]);
  scanf("%d",&ch);
  if(ch)
  {
   n--;
   printf("\nElement %d successfully deleted.\n",A[n+1]);
  }
 }
 else printf("\nStack Underflow\n");
}

 void Seeit()
{
 if(n==-1)
 {
  printf("\nNo elements.\n");
  return;
 }
 printf("\nHere are the elements:\n");
 for(i=0;i<=n;i++)
  printf("%d ",A[i]);
}
 void main()
{
 int c;
 printf("1.Add Elements\n2.Delete Elements\n3.See it all\n4.Exit\n");
 while(1)
 {
  printf("\n\nYour choice : ");
  scanf("%d",&c);
  switch(c)
  {
   case 1:Add();break;
   case 2:Delete();break;
   case 3:Seeit();break;
   case 4:exit(0);
   default:printf("\nInvalid choice\n");
  }
 }
}
