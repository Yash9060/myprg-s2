#include<stdio.h>
int main()
{
	int a[5000],i,key,hashadd=0,n,j,count=0,tempkey;
	printf("\n enter the total no of keys  ");
	scanf("%d",&n);
	for (i = 0; i < n; i += 1)
	{
		printf("\n enter the value of key ");
		scanf("%d",&key);
		tempkey=key;
		key=(key*key);
		while (key!=0)
		{
			j=key%10;
			if (count%2==1)
			{
				hashadd=(hashadd*10)+j;
			}
			count++;
			key=key/10;
		}
		a[hashadd]=tempkey;
		printf("\n location is %d and value is %d \n ",hashadd,a[hashadd]);
		hashadd=0;
	}
	return 0;
}
