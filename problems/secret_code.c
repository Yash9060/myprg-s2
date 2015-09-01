/*You have been given a secret mission where you must break the enemy's code. 
You have already figured out that they encode messages using the following method.
Each letter between 'a' and 'z', inclusive, is assigned a distinct two-digit number between 01 and 26, inclusive.
A message is encoded by simply replacing each letter with its assigned number. For example, if 't' is assigned 20, 'e' is assigned 05 and 's' is assigned 19, then the message "test" is encoded as "20051920". All original messages contain only lowercase letters.
Given assignment of numbers to letters and the encoded message, you need to figure out the original message. */
#include <stdio.h>
#include <string.h>
				
int main()
{
	char a[3][27],b[30],temp;   /*a to store all alphabets b to store ans temp for swaping(while revrsing string )*/
	int i,j,k=0,key=0;		   /*key is encrepted for of message */
	for (i = 0; i < 3; i += 1)
	{
		for (j = 0; j < 10; j += 1)
		{
			a[i][j]='a'+k-1;		/*'a'+k-1 to store a in [0][1] instead of [0][0]*/
			k++;
			
			if (a[i][j]>='a' && a[i][j]<='z')  /*printing only alphabets */
			{
				printf("%3c",a[i][j]);
			}
			else
			{
				printf("   ");				/* printing blank space where there are no alphabets available*/
			}
			
		}
		printf("\n");
	}
	printf("\n enter the value of key ");			
	scanf("%d",&key);
	k=0;
	while (key!=NULL)
	{
		j=key%10;						/*seprating last digit from code and assigning it to j*/
		key=key/10;					
		i=key%10;						/*seprating 2nd last digit from code and assigning it to i*/
		key=key/10;
		b[k]=a[i][j];					/*stroring the alphabet in b*/
		k++;
	}
	/*Revrsing the array in b*/
	for (i = k,j=0; j < i ; i -= 1,j+=1)
	{	
		temp=b[i];
		b[i]=b[j];
		b[j]=temp;
	}
	i=0;
	for (i = 0; i <= k; i += 1)
	{
		printf("%c ",b[i]);				/*printing the reverse array*/
	}
	
return 0;	
}



