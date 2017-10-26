// A PROGRAM to impement selection sort
#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++){

          if (arr[j] < arr[min_idx])
            min_idx=j;

      swap(&arr[min_idx], &arr[i]);

        // Swap the found minimum element with the first element
      }}

      printf("\n SORTED ARRAY is \n");
      for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
}
int main()
  {
  int no,i,j,temp;
  int list[20];
  printf("Enter the number of elements:");
  scanf("%d",&no);
  printf("Enter the elements:\n");
  for(i=0;i<no;i++)
    scanf("%d",&list[i]);

  selectionSort(list,no);

  return 0;
}
