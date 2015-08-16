//Dequeue=double ended queue (d e que)
#include<stdio.h>
#define SIZE 5
        int q[SIZE];
        int front=0,rear=0;
void enqueue(); //  also known as inject (adds element from rear)
void dequeue(); //also known as pop(removes element from front)
int queue_full();
int queue_empty();
void push(); // adds element to front
void eject(); //removes element from rear
void display();
int main()
{
    int choice;
      printf("\n----------------------------------\n");
        printf("\n1-->enqueue(adds element to rear )");
        printf("\n2-->dequeue(removes element from front)");
        printf("\n3-->display(current value from queue)");

        printf("\n4-->push(Add element to front)");
         printf("\n5-->eject(removes element from rear)");
        printf("\n6-->exit the program ");
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
                    push();
                    break;
                case 5:
                    eject();
                    break;
                case 6:
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
int queue_empty()
{
    if(front==0)
        return 1;
    return 0;
}
void enqueue()
{
    int val;
    printf("\n enter the value to be added to queue");
    scanf("%d",&val);
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
    if(queue_empty())
    {
        printf("\nqueue is empty nothing to delete ");
        return (-1);
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

void push()
{
    int i,ahead=0;
    printf("\n enter the number you want to add in front ");
    scanf("%d",&i);
    if(front==1)
    {
        ahead=SIZE;
    }
    else
    {
        if(front==0 || front==SIZE)
            ahead=1;
        else
            ahead=front-1;

        if(ahead==rear)
        {
            printf("\n dequeue is full ");
            return;
        }

    }
    front=ahead;
    q[ahead]=i;

    return;
}
void eject()
{
int item;
    if(front==0 )
        printf("\n Deque is empty");
    else
    {
        if(front ==rear)
        {
            item=q[rear];    // only one element present
            front=rear=0;
        }
        else
        {
            if(rear==1)
                {
                    item=q[rear];
                    rear=SIZE;
                }
                else
                {
                    if(rear==SIZE)
                        {
                            item=q[rear];
                            rear=1;
                        }
                    else
                    {
                            item=q[rear];
                            rear=rear-1;
                    }
                }
        }
    }
    printf("\n item removed is %d",item);
}

