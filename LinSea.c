#include <stdio.h>
#include <stdlib.h>
 void main()
{
 int i,A[20],e,n;
 printf("\nEnter the number of elements:");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 printf("\nEnter the element you want to find:");
 scanf("%d",&e);
 for(i=0;i<n;i++)
  if(A[i]==e)
  {
   printf("Element found at position %d\n",i+1);
   exit(0);
  }
 printf("Element not found.\n");
}
