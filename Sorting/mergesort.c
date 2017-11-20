#include<stdio.h>
#include<stdlib.h>

void merge(int a[200],int left,int mid,int right)
{
	
	int i,j,k;
	int lefthalf[100],righthalf[100];

	for(i=0;i<mid;i++)
	{
		lefthalf[i] = a[i];
	}

	for(j=0;j<right-mid-1;j++)
	{
		righthalf[j] = a[j+mid];
	}

	i=0;
	j=0;
	k=left;

	while(i<left && j<right)
	{
		if(lefthalf[i]<righthalf[j])
		{
			a[k] = lefthalf[i];
			i=i+1;
		}
		else if(lefthalf[i]>righthalf[j])
		{
			a[k] = righthalf[j];
			j=j+1;
		}
		k+=1;
	}

	while(i<left)
	{
		a[k] = lefthalf[i];
		i+=1;
		k+=1;
	}

	while(j<right)
	{
		a[k] = righthalf[j];
		j+=1;
		k+=1;
	}

}

void merge_sort(int A[100],int start, int end)
{
	if(start<end){

		int mid,i;
		mid = ((start+end)/2);
		merge_sort(A,start,mid);
		merge_sort(A,mid+1,end);
		for(i=0;i<end;i++){
			printf("%d",A[i]);
		}
		merge(A,start,mid,end);
	}
}

void main()
{
	int array[100],size,i;
	printf("Enter the size of array \n");
	scanf("%d",&size );
	printf("Elements of array \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}

	merge_sort(array,0,size-1);

	printf("The Merged array is \n");
	i=0;
	while(i<size)
	{
		printf("%d",array[size]);
		i++;
	}

}
