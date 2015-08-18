#include<stdio.h>
int merge_sort();
int n1,n2,temp=0;
int c[50],p,x;
int a[50],b[50],i=0,j=0,k=0;
int main()
{

   int l=0;
    printf("\n enter thr number of elements in a ");
    scanf("%d",&n1);
    printf("\n enter thr number of elements in b ");
    scanf("%d",&n2);
    for (l=0;l<n1;l++)
    {
        printf("enter the %d element in a ",l);
        scanf("%d",&a[l]);
    }
    for (l=0;l<n2;l++)
    {
        printf("enter the %d element in b ",l);
        scanf("%d",&b[l]);
    }
    l=0;
   merge_sort();
   for(temp=0;temp<n1+n2;temp++)
    printf("%3d ",c[temp]);
  return 0;
}
int merge_sort()
{
        printf("\n in merge sort ");

        if(i>=n1)
        {
            p=j;
            while(p<n2)
                {
                    c[k]=b[p];
                    p++;
                    k++;
                }
                return;
        }
       if(j>=n2)
        {
            x=i;
            while(x<n1)
                {
                    c[k]=a[x];
                    x++;
                    k++;
                }
                return;
        }
        if(a[i]<b[j])
        { c[k]=a[i];
            k++;
            i++; }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
        temp++;
    merge_sort();
return c;


}
