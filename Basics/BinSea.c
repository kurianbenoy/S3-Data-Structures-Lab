#include <stdio.h>
#include <stdlib.h>
 void main()
{
 int A[20],n,i,e,s,m,l;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 s=0;l=n;
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 printf("\nEnter the element you want to search for:");
 scanf("%d",&e);
 while(s!=l)
 {
  m=(s+l)/2;
  if(A[m]==e)
  {
   printf("Element found at position %d.\n",m+1);
   exit(0);
  }
  else if(A[m]<e)
   s=m;
  else if(A[m]>e)
   l=m;
 }
 printf("Element not found.\n");
}
