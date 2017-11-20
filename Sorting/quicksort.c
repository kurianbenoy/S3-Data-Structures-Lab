// Recurssive implentation of Quick sort

#include <stdlib.h>
#include <stdio.h>

// Partition method
int partition(int A[100],int left,int right)
{
  int loc,temp;
  loc = left;
  while(left<right)
  {
      while((A[loc] <= A[right])&&(loc<left))
      {
        right -=1;
      }
        if(A[loc] > A[right])
        {
          temp = A[loc];
          A[loc] = A[right];
          A[right] = temp;
          loc = right;
          left +=1;
        }
      while(A[loc] < A[left])
      {
        left +=1;
      }
      if(A[loc]< A[left])
      {
        temp = A[loc];
        A[loc] = A[left];
        A[left] = temp;
        loc = left;
        right -=1;
      }
  return loc;
}
}

void Quicksort(int A[150],int first,int last)
{
  int p;
  if(first<last)
  {
  p =  partition(A,first,last);
  Quicksort(A,first,p-1);
  Quicksort(A,p+1,last);
}
}

void main()
{
  int array[100];
  int n,i;
  printf("Enter the no of elements of array\n");
  scanf("%d",&n);

  printf("Enter the elements in array \n");
  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }

  Quicksort(array,0,n-1);

  printf("Sorting the elements are : \n");
  for(i=0;i<n;i++)
  {
    printf("%d\nl",array[i]);
  }
}
