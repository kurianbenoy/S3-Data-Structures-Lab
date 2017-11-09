#include<stdio.h>
#include<stdlib.h>

void mergesort(int a[10],size)
{
	int left,right,i=0,j=0,k=0;
	int lefthalf[50],righthalf[50],merge[100];
	left = size/2;
	right = size -left;

	// dividing into 2 arrays
	for(i=0;i<left;i++){
		lefthalf[i] = a[i];
	}

	for(i=left+1;i<n;i++)
	{
		righthalf[k] = a[i];
		k++;
	}

	k=0;
	mergesort(a[10],left);
	mergesort(a[10],right);

	while(i<left && j<right)
	{
		if(lefthalf[i]<righthalf[j])
		{
			merge[k] = lefthalf[i];
			i=i+1;
		}
		else if(lefthalf[i]>righthalf[j])
		{
			merge[k] = righthalf[j];
			j=j+1;
		}
		k+=1;
	}

	while(i<left)
	{
		merge[k] = lefthalf[i];
		i+=1;
		k+=1;
	}

	while(j<right)
	{
		merge[k] = righthalf[j];
		j+=1;
		k+=1;
	}


}


void main()
{

}