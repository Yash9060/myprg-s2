/*Problem statement
Caeser cipher is an age old encryption technique that was used by Roman emperor Julius Caeser to write letters to his queen Cleopatra. 
Given a string encrypted using Caeser Cipher, find the plain text.
Input----
You will be given a string comprising of only upper English letters.
In caeser cipher each letter of plain text is substituted by another letter that is some key units ahead 
of it towards right in a circular traversal.
For example, if key is 3, A becomes D, B becomes E and Z becomes C.
First line of input will contain a number T = no. of test cases.
Each test case will contain two lines. First line will contain the key. 
Next line will an encrypted string comprising of only upper case letters. */
#include <stdio.h>
int main()
{
	char a[10],message;
	int key,i=0;
	printf("\n enter the value of key ");
	scanf("%d",&key);
	printf("\n enter the message with # at end\n");
	while (a[i]!='#')
	{
		scanf("%c",&a[i]);
		if (a[i]=='#')
		{
			break;
		}
		i++;
	}
	for (i = 0; a[i]!='#'; i += 1)
	{
		if(a[i]+key>'z')
		{
			printf("%c",'a'-('z'-(a[i]+key))-1);
			
		}
		else
		{
			printf("%c",a[i]+key);
		}
	}
	return 0;
}
