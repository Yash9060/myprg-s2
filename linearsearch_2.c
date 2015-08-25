#include <stdio.h>
int main()
{
	int a[50],n,i,j,key,location;
	printf("\n enter the size of array ");
	scanf("%d",&n);
	for (i = 0; i < n; i += 1)
	{
		printf("\n enter %d element ",i);
		scanf("%d",&a[i]);
	}
	printf("\n enter the value of key ");
	scanf("%d",&key);
	linearSearch(a,key,j);
return 0;
}
void linearSearch(int a[],int key,int j)
{	

	if(key==a[j])	
	{
		printf("\n key found at %d location\n",j+1);
	}
	else
	linearSearch(a,key,j+1);
}
					
