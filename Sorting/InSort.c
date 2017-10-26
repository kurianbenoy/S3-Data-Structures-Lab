//Program made by Shawn Mathew. AFTER SITTING ALL DAY in front of it.
#include <stdio.h>
 void main()
{
 int i,j,n,A[20],k,c;
 printf("Enter the number of elements: ");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 for(i=0;i<n;i++)
  for(j=i+1;j<n;j++)
   if(A[i]>A[j])
   {
    c=A[j];                //Why c? That's because A[i]'s and A[j]'s values change in this loop.
    for(k=j;k>i;k--)
     A[k]=A[k-1];
    A[i]=c;
   }
 printf("Here's the sorted array:");
 for(i=0;i<n;i++)
   printf("%d ",A[i]);
 printf("\n");
}
