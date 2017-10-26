  #include <stdio.h>
 void main()
{
 int n,A[20],i,j,c;
 printf("Enter the gfsdjlkof elements:");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 for(i=0;i<n;i++)
  for(j=0;j<n-1;j++)
   if(A[j]>A[j+1])
   {
    c=A[j];
    A[j]=A[j+1];
    A[j+1]=c;
   }
 printf("Here's the sorted array:\n");
 for(i=0;i<n;i++)
  printf("%d\n",A[i]);
}
