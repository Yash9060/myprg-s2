#include <stdio.h>
int main()
{
	int n,i,counter;		//n= grid size counter= count number of steps 
	int x1,y1,x2,y2;       //x1,y1=input co-ordinates x2,y2= output co-ordinates
	printf("\nenter value of n ");
	scanf("%d",&n);
	printf("\n Enter input co-ordinates");
	scanf("%d %d",&x1,&y1);
	printf("\n Enter output co-ordinates");
	scanf("%d %d",&x2,&y2);
	if(x1>n || x2>n || y1>n || y2>n )
	{
		printf("\n wrong Co-Ordinates ");	
	}
	else
	{
		counter=findsteps(x1,y1,x2,y2);
		printf("\n steps=%d\n",counter);
	}
return 0;
}
int findsteps(int x1,int y1, int x2,int y2)
{
	int step=0;
	
	if (x1-x2>=0 )				
	{
		while (y1!=y2)
		{
			if (y1>=y2)
				y2++;
			else
				y1++;
			step++;
		}
		while (x1!=x2)
		{
			x2++;
			step++;
			
		}
	}
	else
	{
		while (y1!=y2)
		{
			if (y1>=y2)
				y2++;
			else
				y1++;
			step++;
		}
		while (x1!=x2)
		{
			x1++;
			step++;
			
		}
	}
	return step;
}
