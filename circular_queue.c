#include<stdio.h>
#define SIZE 50
        int q[SIZE];
        int front=0,rear=0;
void enqueue();
void dequeue();
//int queue_full();
//int queue_empty();
void display();
int main()
{
    int choice;
      printf("\n----------------------------------\n");
        printf("\n1-->enqueue(insert value to queue)");
        printf("\n2-->dequeue(remove value from queue)");
        printf("\n3-->display(current values in queue)");
        printf("\n4-->exit the program ");
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
                    display();
                    break;
                case 4:
                    return;
            }
        }
            return 0;
}
int queue_full()
{
    if(front==rear+1 || (rear==SIZE-1 && front ==0))
        return 1;
    else
    return 0;
}
/*int queue_empty()
{
    if(front==0)
        return 1;
    return 0;
}*/
void enqueue()
{
    int val;
    printf("\n enter the value to be added to queue");
    scanf("%d",&val);
  //  temp=queue_full();
   if(queue_full())
   {
      printf("\n queue is full \n");
    }
    else
    {
        if(front==0)
            front=1;
          rear=(rear%SIZE)+1;
          q[rear]=val;
    }

return;
}
void dequeue()
{
    int item;
    if(front==0)
    {
        printf("\nqueue is empty nothing to delete ");
        //return (-1);
    }
    else
    {
        item=q[front];
        if(front==rear)
        {
            front=0;
            rear=0;
        }
        else
        {
            front=(front%SIZE)+1;
        }

    }
    printf("\n item removed is %d",item);
return;

}

void display()
{
    int i;
    printf("\n current elemnets in queue");
    for(i=front;i<=rear;i++)
    {
        printf("%3d",q[i]);

    }
    return;
}

