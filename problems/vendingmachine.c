/*Problem statement

Mr X. wants to buy something from a vending machine. 
He can press an item code on the machine and enter multiple coins into it to buy an item.
The machine however, does not give back change.
So, a user must enter coins totaling the exact price of an item.
Else, it rejects an order and throws the coins back. Mr. X has some coins and he wants to buy some item.
Given the value of these coins and the price of an item, 
You need to tell Mr. X whether it will be possible for him to buy this item or not.
Input

First line of input will contain a positive integer T = number of test cases.
Each test case will contain multiple lines.
First line of each test case will contain two positive integers N = number of coins in Mr X's pocket and P = price of item that he wants to buy.
These integers will be separated by space. Next line will contain N space separated numbers corresponding to the value of coins in Mr. X's pocket. 
There may be duplicates in this list because Mr X may have multiple coins of same value. */
#include <stdio.h>
void quicksort(int [20],int ,int );
int partition(int [20],int ,int );
int decision(int [20],int ,int );
int main()
{
	int a[20],left=0,right,i,n,price;
	printf("\n enter the price of the machine "); /*Price of machine to be purchased machine */
	scanf("%d",&price);
	printf("enter the total number of coins \n"); /*total number of coins */	
	scanf("%d",&n);
	right=n-1;
	for (i = 0; i < n; i += 1)				/*Taliking value opf individual coin*/
	{
		scanf("%d",&a[i]);
	}
/*	printf("\n unsorted array ");*/			/*priniting of unsorted chillar */
/*	for (i = 0; i < n; i += 1)*/
/*	{*/
/*		printf("%d ",a[i]);*/
/*	}*/
	quicksort(a,left,right);
/*	printf("\n after sorting chillar ");*/	/*printing of chillar after sorting */
/*	for (i = 0; i < n; i += 1)*/
/*	{*/
/*		printf("%d ",a[i]);*/
/*	}*/
	decision(a,n-1,price);
return 0;
}
void quicksort(int a[20],int left,int right)			/*Divide part of quick sort algorithm*/
{	
	int pivot;
	if(right>left)
	{
		pivot=partition(a,left,right);
		quicksort(a,left,pivot);
		quicksort(a,pivot+1,right-1);
	}
	return 0;
}
int partition(int a[20],int left,int right)	/*function to find pivot element */
{
	int pivot,loc,temp;
	loc=left;
/*	int i=left,j=right-1;*/
	while(left<right)
		{
			while (a[loc]<=a[right] && (loc<right))
			{
				right=right-1;
			}
			if (a[loc]>a[right])
			{
				  temp=a[right];
				  a[right]=a[loc];
				  a[loc]=temp;
				  loc=right;
				  left=left+1;
			}
			while (a[loc]>=a[left] && loc>left)
			{
				left=left+1;
			}

			if (a[loc]<a[left])		
			{
			  temp=a[left];
		       a[left]=a[loc];
		       a[loc]=temp;
		       loc=left;
		       right=right-1;
			}

		}
return loc;				/*returning of location pivot element */
}
int decision(int a[20],int last,int price)
{
	int sum=0,i;
	for (i = 0; i <= last; i += 1)
	{
		sum=sum+a[i];
	}
	if (sum<price)
	{				/*even after summ all the coins if value of machine is higher then MrX is not allowed to purchase */
		printf("\n sum is %d \n",sum);
		printf("\n NO(from sum<price) \n");
		return 0;
	}
	price=price-a[last];		/*subtracting the largest value of coin from price */
	for (i = last; i >= 0; i -= 1)
	{

		if (price>=0)
		{
			if(price==0)
			{
				printf("\n YES \n");
				return 0;
			}
			else
			{
				price=price-a[i-1];		/*subtraction of one more element from coins to price*/
			}
		}
		else
		{
			price=price-a[i-1];		/*PRICE < 0 so this element should not be subtracted but element befor it should be*/
		}
			
	}
	if (i==-1)
	{				/*if price remains -ve after trying all combination then MrX cannot buy machine */
		
		printf("\n NO STILL pRICE>0 ");	
	}
	return 0;
}






