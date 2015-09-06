#include<stdio.h>
#include<stdlib.h>

#define rando() ((double)rand()/RAND_MAX)
//Defination of hypothesis function is H(x) = a0 + a1x;

#define MAX_EPOCH 100000
int main()
{
    int n=5, i;
    //printf("Enter number of training data sets:-");
    //
    //scanf("&d",&n);
    double x[5]={0,-3,-8,4,11}, y1[5]={-128,-100,-80,-155,-210}, y2[5]={128,160,200,105,70}, ranpat[5];
    int rangex, rangey1, rangey2, minx=x[0], miny1=y1[0], miny2=y2[0], maxx=x[0], maxy1=y1[0], maxy2=y2[0];
    int NumPattern = 5, p, np, op, epoch;
    double eta = 0.009, error, error1, error2, a0, a1, b0, b1, output1, output2;
    a0 = 0;
    a1 = 0;
    b0 = 0;
    b1 = 0;
    /*finding range of x, y1 & y2 for given inputs*/
    for(i=1; i<NumPattern; i++)
    {
        if(minx > x[i])
            minx=x[i];

        if(maxx < x[i])
            maxx=x[i];

        if(miny1 < y1[i])
            miny1=y1[i];

        if(maxy1 > y1[i])
            maxy1=y1[i];

        if(miny2 > y2[i])
            miny2=y2[i];

        if(maxy2 < y2[i])
            maxy2=y2[i];
    }
    rangex=maxx-minx;
    rangey1=maxy1-miny1;
    rangey2=maxy2-miny2;
    printf("%d %d %d\n", rangex, rangey1, rangey2);
    /*Feature scaling starts here*/
    for(i=0; i<NumPattern; i++)
    {
        x[i] = x[i]/rangex;
        y1[i] = y1[i]/rangey1;
        y2[i] = y2[i]/rangey2;
        //printf("%lf %lf %lf", x[i], y1[i], y2[i]);
    }
    /*printf("Start entering values now\n");
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &x[i], &y1[i], &y2[i]);
    }*/
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
            output1 = a0 + (a1 * x[p]);
            error += 0.5 * (output1 - y1[p]) * (output1 - y1[p]) / NumPattern;
            a0 = a0 - eta*(output1 - y1[p])/NumPattern;
            a1 = a1 - eta*(output1 - y1[p])*x[p]/NumPattern;
            //printf("x = %lf y1 = %lf output1 = %lf Error1 = %lf\n",x[p], y1[p], output1, error1);
        }
        for(np = 0; np<NumPattern; np++)
        {
            /* Gradient Descent Algorithm */
            p = ranpat[np];
            output2 = b0 + (b1 * x[p]);
            error += 0.5 * (output2 - y2[p]) * (output2 - y2[p]) / NumPattern;
            b0 = b0 - eta*(output2 - y2[p])/NumPattern;
            b1 = b1 - eta*(output2 - y2[p])*x[p]/NumPattern;
            //printf("x = %lf y2 = %lf output2 = %lf Error2 = %lf\n",x[p], y2[p], output2, error2);
        }
        error = error/2;
        if(epoch % 100 == 0)
        {
            //printf("x = %lf y1 = %lf y2 = %lf output1 = %lf output2 = %lf Error = %lf\n",x[p], y1[p], y2[p], output1, output2, error);
            printf("Epoch = %d\tError = %lf\n\n", epoch, error);
        }
        if(error < 0.0004)
        {
            printf("\nEpoch = %d\tError = %lf", epoch, error);
            break;
        }
    }
    a1 = a1*rangey1/rangex;
    a0 = a0*rangey1;
    b1 = b1*rangey2/rangex;
    b0 = b0*rangey2;
    printf("\nOur Hypothesis Function for 1st output is %lfx+%lf",a1 ,a0 );
    printf("\nOur Hypothesis Function for 2nd output is %lfx+%lf",b1, b0 );
    printf("\nTesting Period\n");
    int input;
    while(1)
    {
        scanf("%d", &input);
        if(input == -1.0)
        {
            break;
        }
        output1 = a0 + (a1 * input);
        output2 = b0 + (b1 * input);
        printf("input=>%d\toutput1=>%lf\toutput2=>%lf\n", input, output1, output2);
    }
}
