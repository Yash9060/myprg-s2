#include<stdio.h>

int main()
{
    int a[50],b[50],c[50];      //array a and b will be sorted and then dded to c
    int i=0,j=0,k=0,l,p;           // pointers to a,b,c respectively l & p for rotating the loop
    int n1,n2;                // no of elements in array a and b
    printf("\n enter the number of elemenst in array a and b ");
    scanf("%d %d",&n1 , &n2);
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
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
            {
                c[k]=a[i];
                i++;
                k++;
            }
        else
            {
                c[k]=b[j];
                j++;
                k++;
            }

    }
    if(i>=n1)
    {
       p=j;
        while(p<n2)
            {
                c[k]=b[p];
                p++;
                k++;
            }
    }
     if(i>=n2)
    {
       l=j;
        while(p<n1)
            {
                c[k]=a[l];
                l++;
                k++;
            }
    }
    for(l=0;l<n1+n2;l++)
        printf("%3d",c[l]);


  return 0;
}
