#include <stdio.h>
int main()
{
	int a[50],i,j,key,n,hashadd;
	printf("\n enter the size of keys to be entered ");
	scanf("%d",&n);
	
	for (i = 0; i < n; i += 1)
	{
		printf("\n enter the number to be entered \n");
		scanf("%d",&key);
		hashadd=key%n;
		a[hashadd]=key;
		printf("\n location is %d and value is %d \n ",hashadd,a[hashadd]);
		
	}
return 0;
}	
