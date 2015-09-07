#include <stdio.h>

int main()
{
    int m;
    double a0, a1, b0, b1, x, y1, y2, denom;
    double sumx=0, sumy1=0, sumy2=0, sumxy1=0,sumxy2=0, sumxsq=0;
    printf("Enter Number of Training Sets:-");
    scanf("%d", &m);
    printf("Start Entering Training data sets\n");
    while(m--)
    {
        scanf("%lf %lf %lf", &x,&y1,&y2);
        sumx += x;
        sumxy1 += x * y1;
        sumxsq += x * x;
        sumy1 += y1;
        sumxy2 += x * y2;
        sumy2 += y2;
    }
    denom = (m*sumxsq) - (sumx*sumx);
    a0 = (sumy1*sumxsq - sumx*sumxy1)/denom;
    a1 = (m*sumxy1 - sumx*sumy1)/denom;
    b0 = (sumy2*sumxsq - sumx*sumxy2)/denom;
    b1 = (m*sumxy2 - sumx*sumy2)/denom;
    printf("Final Equation is %lfx+%lf", a1, a0);
    printf("\nFinal Equation is %lfx+%lf", b1, b0);
    return 0;
}
