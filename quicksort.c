#include<stdio.h>
int partion(int [10],int,int);
void arraysort(int [10],int,int);
int main()
{
    int left=0,i,right,n,a[10];
    printf("enter total no of elements in array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter %d element ",i);
        scanf("%d",&a[i]);
    }
    right=n-1;
    quicksort(a,left,right);
    //array printing
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
  return 0;
}
int partition(int a[10],int left,int right)
{
    int i,loc,temp;/*n=no of elements,l=lowerbound,r=upperbound,loc=location of pivot element,temp=tempvariable for swapping*/
    loc=left;
    printf("\nright set\n ");

    while(left<right)
    {
        printf("\n in while \n");
        while(a[loc]<=a[right] && loc<right)
           {
                printf("\n in condition 1 \n");
                right=right-1;
           }
        if(a[loc]>a[right])
        {

            temp=a[right];
            a[right]=a[loc];
            a[loc]=temp;
            loc=right;
            left=left+1;
        }
        while(a[loc]>=a[left] && loc>left)
           {

            left=left+1;
           }
        if(a[loc]<a[left])
        {

            temp=a[left];
            a[left]=a[loc];
            a[loc]=temp;
            loc=left;
            right=right-1;
        }

    }
    a[left]=a[right];
    a[right]=a[loc];
    return right;

}
void quicksort( int a[], int left, int right )
{

    if ( right > left )
     {
          int pivot;
          pivot= partition( a, left, right );
          quicksort( a, left, pivot-1 );
          quicksort( a, pivot+1, right );
     }

}

