/* Given a number n, find out the number of zeroes at the end of decimal representation of n! */
#include <stdio.h>
#include <math.h>
			
int main()
{
	int n,i,y;
	float fact=1;
	printf("\n enter the number ");
	scanf("%d",&n);
	/*calculation of factorial of given number*/
	for (i = 1; i <= n; i += 1)
	{
		fact=fact*i;
	}
	printf("\n factorial= %f",fact);
	for (i = 1; i < n; i += 1)
	{
		y=pow(10,i);
		if((int)fact%(int)y!=0)
		{
			printf("trailing zeroes =%d\n",i-1);
			return 0; 
		}		
	}
	
return 0;	
}
