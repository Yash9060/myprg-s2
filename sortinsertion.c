/*first element compared with none 2nd element compared with first ....and last elemet compared with all  */

#include<stdio.h>
int main()
{
 int a[50],n,i,j,t;
 printf("enter no of elements ");
 scanf("%d",&n);
 printf("enter %d elements \n",n);
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }

 for(i=1;i<n;i++)
    {
        j=i;
        while(j>0 && a[j-1]>a[j])
        {
            t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;
            j--;
        }
    }
    printf("\n sorted array is\n ");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
 return 0;
}
