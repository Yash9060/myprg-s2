#include<stdio.h>
#include<math.h>

int main()
{
    int n, i;
    float sumx, sumy, sumsq, sumxy, x, y, a0, a1, denom;
    printf("Enter value n:");
    scanf("%d", &n);
    sumx=0;
    sumsq=0;
    sumy=0;
    sumxy=0;
    for(i=0; i<n; i++)
    {
        scanf("%f %f", &x, &y);
        sumx += x;
        sumsq += pow(x, 2);
        sumy += y;
        sumxy += x * y;
    }
    denom = n * sumsq - pow(sumx, 2);
    a0 = (sumy * sumsq - sumx * sumxy) / denom;
    a1 = (n * sumxy - sumx * sumy) / denom;
    printf("\n%fx + %f\n", a1, a0);
    printf("Enter test value:");
    scanf("%f", &x, &y);
    printf("\n%f", (a1 * x) + a0);
    return 0;

}
