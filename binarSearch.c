#include <stdio.h>
int main()
{
	int a[50],i,key,low,high,mid;
	low=0;
	printf("\n enter the size of array");
	scanf("%d",&high);
	for (i = 0; i < high; i += 1)
	{
		printf("\n enter the %d element ",i);
		scanf("%d",&a[i]);
	}
	printf("\n enter the value of key");
	scanf("%d",&key);
	while (low<high)
	{		
		printf("\n in while  ");
		mid=(low+high)/2;
		if(key==a[mid])
		{
			printf("\n key found at %d location \n",mid+1);
			return;
		}	
		else if(key<a[mid])
		{
			high=mid;
		}
		else
			low=mid;
	}
	return 0;
}
