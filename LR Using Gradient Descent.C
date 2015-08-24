#include<stdio.h>
#include<stdlib.h>

#define rando() ((double)rand()/RAND_MAX)
//Defination of hypothesis function is H(x) = a0 + a1x;

#define MAX_EPOCH 100000
int main()
{
    int x[3]={1,2,3}, y[3]={2,4,6}, ranpat[3];
    int NumPattern = 3, p, np, op, epoch;
    double eta = 0.5, error, a0, a1, output;
    a0 = rando();
    a1 = rando();

    for(epoch = 1; epoch <= MAX_EPOCH; epoch++)
    {
        /* Pattern randomizer code */
        for(p=0; p<NumPattern; p++)
        {
            ranpat[p] = p;
        }
        for(p=0; p<NumPattern; p++)
        {
            np = p +  rando() * (NumPattern - p);
            op = ranpat[p]; ranpat[p] = ranpat[np]; ranpat[np] = op;
        }
        error = 0.0;
        for(np = 0; np<NumPattern; np++)
        {
            /* Gradient Descent Algorithm */
            p = ranpat[np];
            output = a0 + (a1 * x[p]);
            a0 = a0 - eta*(output - y[p])/NumPattern;
            a1 = a1 - eta*(output - y[p])*x[p]/NumPattern;
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
