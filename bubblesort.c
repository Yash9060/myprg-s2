/*first element compared with none 2nd with all n-1(except first ) and last compared with all 
the biggest  elememt gets set to last then 2nd biggest element ....*/
#include<stdio.h>

int main()
{
    int a[50],i,j,n,temp=0;
    printf("enter total no of elemnts \n ");
    scanf("%d",&n);
    printf("\n enter %d elments \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
       for(j=0;j<n-i;j++)
       {
            if(a[j]>a[j+1])
            {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
            }
       }
    }
    printf("sorted array is :\n ");
    for(i=0;i<n;i++)
        printf("%5d\n",a[i]);
  return 0;
}
