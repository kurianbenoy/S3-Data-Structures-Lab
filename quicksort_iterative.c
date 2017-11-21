#include<stdio.h>
#include<stdlib.h>

// swapping two numbers
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b =t;
}

// Partition with first element as pivot
int partition(int array[100],int left, int right)
{
	int loc = left;
	while(left<right)
	{
		while((array[loc]<=array[right]) && (loc<right))
			right -= 1;

		if(array[loc]>array[right])
		{
			swap(&array[loc],&array[right]);
			loc = right;
			left = left +1;
		}

		while((array[loc]>=array[left]) &&(loc>left))
			left +=1;

		if(array[loc] < array[left])
		{
			swap(&array[loc],&array[left]);
			loc = left;
			right -= 1;
		}
	}
	return loc;
}

// Partition with last element as pivot

int partition (int arr[], int left, int right)
{
    int x = arr[right];
    int i = (left - 1);
 
    for (int j = left; j <= right- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap (&arr[i], &arr[j]);
        }
    }
    swap (&arr[i + 1], &arr[right]);
    return (i + 1);
}

void quickSortIterative (int arr[], int l, int h)
{
    // Create an auxiliary stack
    int stack[ h - l + 1 ];

    // initialize top of stack
    int top = -1;

    // push initial values of l and h to stack
    stack[ ++top ] = l;
    stack[ ++top ] = h;

    // Keep popping from stack while is not empty
    while ( top >= 0 )
    {
        // Pop h and l
        h = stack[ top-- ];
        l = stack[ top-- ];

        // Set pivot element at its correct position
        // in sorted array
        int p = partition( arr, l, h );

        // If there are elements on left side of pivot,
        // then push left side to stack
        if ( p-1 > l )
        {
            stack[ ++top ] = l;
            stack[ ++top ] = p - 1;
        }

        // If there are elements on right side of pivot,
        // then push right side to stack
        if ( p+1 < h )
        {
            stack[ ++top ] = p + 1;
            stack[ ++top ] = h;
        }
    }
}