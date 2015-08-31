/*You have been given a secret mission where you must break the enemy's code. 
You have already figured out that they encode messages using the following method.
 Each letter between 'a' and 'z', inclusive, is assigned a distinct two-digit number between 01 and 26, inclusive.
 A message is encoded by simply replacing each letter with its assigned number. For example, if 't' is assigned 20, 'e' is assigned 05 and 's' is assigned 19, then the message "test" is encoded as "20051920". All original messages contain only lowercase letters.
Given assignment of numbers to letters and the encoded message, you need to figure out the original message. */
#include <stdio.h>
#include <string.h>
				
int main()
{
	char a[3][27],b[30],temp;
	char *p;
	int i,j,k=0,key=0;
	for (i = 0; i < 3; i += 1)
	{
		for (j = 0; j < 10; j += 1)
		{
			a[i][j]='a'+k-1;
			k++;
		//	printf("%3c",a[i][j]);
			
			if (a[i][j]>='a' && a[i][j]<='z')
			{
				printf("%3c",a[i][j]);
			}
			
		}
		printf("\n");
	}
	printf("\n enter the value of key ");
	scanf("%d",&key);
	k=0;
	while (key!=NULL)
	{
		j=key%10;
		key=key/10;
		i=key%10;
		key=key/10;
		b[k]=a[i][j];

		k++;
	}
	for (i = k; i >=0; i -= 1)
	{	
/*		temp=b[i];*/
/*		b[i]=b[j];*/
/*		b[j]=temp;*/
		printf("%c ",b[i]);
	}
/*	for (i = 0; i < k; i += 1)*/
/*	{*/
/*		printf("%c ",b[i]);*/
/*	}*/
	
return 0;	
}



