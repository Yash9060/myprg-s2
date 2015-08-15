#include<stdio.h>


int main()
{
    int a[50],n,i,j,min,temp;
    printf("enter the total \n");
    scanf("%d",&n);
    printf("\nenter %d elemets\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     for(i=0;i<n;i++)
      {
        min=a[i];
        j=i;
        while(j<n)
        {
            if(min>a[j])
            {
		    temp=a[i];
		    a[i]=a[j];
		    a[j]=temp;
	    }
            j++;
        }

      }
      printf("\narray in sorted order \n");
for(i=0;i<n;i++)
    printf("%d\n",a[i]);
return 0;
}
