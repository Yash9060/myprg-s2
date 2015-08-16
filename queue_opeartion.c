#include<stdio.h>
#define SIZE 50
        int q[SIZE];
        int front=0,rear=0;
void enqueue();
void dequeue();
int main()
{
    int choice;
      printf("\n----------------------------------\n");
        printf("\n1-->enqueue(insert value to queue)");
        printf("\n2-->dequeue(remove value from queue)");
        printf("\n3-->exit the program ");
       printf("\n----------------------------------\n");


     while(1)
        {
            printf("\n enter your choice ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    enqueue();
                    break;
                case 2:
                    dequeue();
                    break;
                case 3:
                    return;
            }
        }
            return 0;
}

void enqueue()
{
    int val;
    printf("\n enter the value to be added to queue");
    scanf("%d",&val);
    if(rear==SIZE)
    {
        printf("\n queue is full ");
    }
    else if(rear==0 && front==0)
    {
        front=1;
    }
    rear=rear+1;
    q[rear]=val;
return;
}
void dequeue()
{
    int item;
    if(front==0)
        printf("\nqueue is empty ");

    else
    {
        item=q[front];
        if(front == rear)
        {
            front=0;
            rear=0;
        }
        else
            front=front+1;

    }
    printf("\n item removed is %d",item);
return;

}
