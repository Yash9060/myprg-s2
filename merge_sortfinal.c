/* C program for official merge sort this to be included in exams */
#include<stdlib.h>
#include<stdio.h>
void merge(int [],int ,int, int);
void merge_sort(int [],int ,int);
int main()
{
	int arr[50],arr_size,i;
	printf("\n enter the size of array ");
	scanf("%d",&arr_size);
	for(i=0;i<arr_size;i++)
        scanf("%d",&arr[i]);
	printf("Given array is \n");
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);
	return 0;
}
void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int mid=(l+r)/2;			
		mergeSort(arr, l, mid);
		mergeSort(arr, mid+1, r);
		merge(arr, l, mid, r);
	}
}



void merge(int arr[], int l, int mid, int r)
{
	int i, j, k;
	int n1 = mid+ 1;
	int n2 = r - mid;

	int L[n1], R[n2]; 			//temporary arrays l=left of main array r= right of main array 

	
	for(i = 0; i < n1; i++)
		L[i] = arr[i];
	for(j = 0; j < n2; j++)
		R[j] = arr[mid + 1+ j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0;
	j = 0;
	k = 0;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

/* Function to print an array */
void printArray(int A[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}


