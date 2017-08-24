#include<stdio.h>

void insertionSort(int arr[],int n);

void main()
{
  int i,key,j,a[100],n;
  printf("Enter the value of n: \n");
  scanf("%d",&n);
  printf("Enter the elements of array\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  insertionSort(a,n);
  printf("\n Sorted Elements are: \n");
  for(i=0;i<n;i++)
    printf("%d\n",a[i]);
  }

void insertionSort(int arr[100],int n){
  
  int i,key,j;
  for(i=1;i<n;i++){
    key = arr[i];
    j=i-1;
    while(j >=0 && arr[j] >key)
    {
       
       arr[j+1] = arr[j];
       j=j-1;
    }
    arr[j+1] = key;
    }
    }
  
