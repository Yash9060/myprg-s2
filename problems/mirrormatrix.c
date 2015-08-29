/*Problem statement
Given a two dimensional array, print its mirror image if mirror is placed along one of the sides of the array.
*/

#include <stdio.h>
int main()
{
	int a[50][50],i,j,nrow,ncol;		//a contains matrix to be mirrored, nrow=no of rows ,ncol= no of columns
	printf("\n enter the no of rows ");
	scanf("%d",&nrow);
	printf("\n enter the no of colums ");
	scanf("%d",&ncol);
	/*scanning the enteries of matrix */
	for (i = 0; i < nrow; i += 1)
	{
		for (j = 0; j < ncol; j += 1)
		{
			printf("\n enter the [%d][%d] element ",i,j);
			scanf("%3d",&a[i][j]);
		}
	}
	/*priting the given matrix */
	for (i = 0; i < nrow; i += 1)
	{
		for (j = 0; j < ncol; j += 1)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	/*printing the mirror matrix */
	for (i = 0; i < nrow; i += 1)
	{
		for (j = ncol-1; j >=0; j-= 1)
		{
				printf("%d",a[i][j]);
		}
		printf("\n");
	}
return 0;	
}
