#include<stdio.h>
int main()
{
	int a[50],i,n,key;
	printf("\n enter the size of array ");
	scanf("%d",&n);	
	printf("\n now starting to stoe value in array");
	for (i = 0; i < n; i += 1)
	{
		printf(" enter your %d element ",i);
		scanf("%d",&a[i]);
	}
	printf("\n enter the value of key ");
	scanf("%d",&key);
	for (i = 0; i < n; i += 1)
	{
		if(key==a[i])
			{
				printf("key is found at %d location \n",i+1 );
				break;
			}	
	}
	return 0;
}
