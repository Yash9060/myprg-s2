#include<stdio.h>

/* Hera is Linear Regression algorithm
 * I tried to solve linear regression algorithm using
 * Normal Equation Method rather than Gradient Descent algorithm
 * Advantages of this algorithm are
   1. No need of Learning Rate.
   2. Much quicker than Gradient Descent.
   3. accurate Result than Gradient Descent.
 * This algorithm is to be used when
 * we have training data set in order of 10K
 * For larger then that we should use Gradient Descent
 * This program is focused for problems that have only one feature.
 * For Multiple(n) Features this algorithm is very different.
 * And same cannot be used for more than 1 features.
 * There is a lot of calculus behind Normal Equation Method.
 */

int main()
{
    int m;
    double a0, a1, x, y, denom;
    double sumx=0, sumy=0, sumxy=0, sumxsq=0;
    printf("Enter Number of Training Sets:-");
    scanf("%d", &m);
    printf("Start Entering Training data sets\n");
    while(m--)
    {
        scanf("%lf %lf", &x, &y);
        sumx += x;
        sumxy += x * y;
        sumxsq += x * x;
        sumy += y;
    }
    denom = (m*sumxsq) - (sumx*sumx);
    a0 = (sumy*sumxsq - sumx*sumxy)/denom;
    a1 = (m*sumxy - sumx*sumy)/denom;
    printf("Final Equation is %lfx+%lf", a1, a0);
    return 0;
}
