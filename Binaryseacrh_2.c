#include <stdio.h>
int main()
{
	int a[50],i,low=0,high,key;
	printf("\n enter the size of array");
	scanf("%d",&high);
	for (i = 0; i < high; i += 1)
	{
			printf("\n enter %d element ",i);
			scanf("%d",&a[i]);
	}
	printf("\n enter the value of key ");
	scanf("%d",&key);
	binarySearch(a,low,high,key);
	printf("\n Search is now over :)\n ");	
return 0;
}
int binarySearch(int a[],int low,int high,int key)
{
	int mid;
	mid=(low+high)/2;
	if(key==a[mid])
	{	
		printf("\n key is found at %d location",mid+1);
		return;
	}
	else if(key<a[mid])
		high=mid;
	else
		low=mid;
	binarySearch(a,low,high,key);
return;
}
