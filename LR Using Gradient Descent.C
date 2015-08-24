#include<stdio.h>
#include<stdlib.h>

#define rando() ((double)rand()/RAND_MAX)
//Defination of hypothesis function is H(x) = a0 + a1x;

#define MAX_EPOCH 100000
int main()
{
    int x[3]={1,2,3}, y[3]={2,4,6}, ranpat[3];
    int NumPattern = 3, p, i, np, op, epoch;
    double eta = 0.5, error, a0, a1, d0, d1, output;
    a0 = 0;
    a1 = 0;
    printf("a1 = %lf, a1 = %lf\n", a0, a1);

    for(epoch = 1; epoch <= MAX_EPOCH; epoch++)
    {
        for(p=0; p<NumPattern; p++)
        {
            ranpat[p] = p;
        }
        for(p=0; p<NumPattern; p++)
        {
            np = p +  rando() * (NumPattern - p);
            op = ranpat[p]; ranpat[p] = ranpat[np]; ranpat[np] = op;
        }
        d0 = 0.0;
        d1 = 0.0;
        error = 0.0;
        for(np = 0; np<NumPattern; np++)
        {
            p = ranpat[np];
            output = a0 + (a1 * x[p]);
            d0 = a0 - eta*(output - y[p])/NumPattern;
            d1 = a1 - eta*(output - y[p])*x[p]/NumPattern;
            a0 = d0;
            a1 = d1;
            error += 0.5 * (output - y[p]) * (output - y[p]) / NumPattern;
            //printf("x = %d y = %d output = %lf Error = %lf\n",x[p], y[p], output, error);
        }
        if(epoch % 1000 == 0)
        {
            printf("\nEpoch = %d\tError = %lf", epoch, error);
        }
        if(error < 0.000000004)
        {
            printf("\nEpoch = %d\tError = %lf", epoch, error);
            break;
        }
    }
    printf("\nOur Hypothesis Function is %lfx+%lf", a1, a0);
    printf("\nTesting Period\n");
    int input;
    while(1)
    {
        scanf("%d", &input);
        if(input == -1)
        {
            break;
        }
        output = a0 + (a1 * input);
        printf("input=>%d\toutput=>%f\n", input, output);
    }
}
