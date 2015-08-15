#include<stdio.h>
#define SIZE 50
void push();
void pop();
void display();
struct stack
{
    int data[SIZE];
    int top;
}s;


int main()
{
     s.top=-1;
    int choice;


    printf("\n---------------------------------------------\n");
    printf("\n\t 1-->push\n");
    printf("\n\t 2-->pop\n");
    printf("\n\t 3-->display\n");
    printf("\n\t 4-->exit\n");
     printf("\n---------------------------------------------\n");
   while(1)
   {
    printf("\n enter choice ");
    scanf("%d",&choice);

    switch(choice)
    {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
               return;
                break;
    }
}
  return ;
}
void push()
{
    if(s.top==SIZE-1)
    {
        printf("\n NO Space available ");
    }

    else
    {
        s.top=s.top+1;
        printf("\n enter the number you want to enter ");
        scanf("%d",&s.data[s.top]);
    }
    return;
}
void pop()
{
    int num;
    if(s.top==-1)
    {
        printf("\n stack is empty ");
    }
   else
   {
        num=s.data[s.top];
        printf("poped out element is %d \n",s.data[s.top]);
        s.top=s.top-1;

    }
    return ;
}

void display()
{
    int i;
    printf("\n current position of stack is \n");
     if(s.top==-1)
    {
        printf("\n stack is empty ");
    }
    else
 {
    for(i=s.top;i>=0;i--)
    {
        printf("%3d",s.data[i]);

    }
 }

        return;
}









