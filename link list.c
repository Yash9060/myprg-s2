#include<stdio.h>

#include<stdlib.h>
#define NULL 0
struct node
{
    int num;
    struct node *next;
};
typedef struct node head;

int main()
 {
    head *start=NULL;
    void create(head *p);
    int count(head *p);
    void print(head *p);
    void add_node_end(head *p);
    void add_node_beginning(head *p);
    void add_any_pos(head *p);
    start=(head *)malloc(sizeof(head));
    start->num=NULL;
    start->next=(head *)malloc(sizeof(head));
    create(start);
    printf("\n");
    print(start);
    printf("\n");
    //add_node_end(start);
    printf("\n");
    //add_node_beginning(start);
    add_any_pos(start);
    printf("\n");
    print(start);
    printf("\n");
    count(start);
   printf("\n number of items %d \n ",count(start)-1);
    return 0 ;
 }
 void create (head *start)
 {

    printf("enter -1 to end \n");
    scanf("%d",&start->next->num);
    if(start->next->num==-1)
    {
        start->next->num=NULL;
    }
    else
    {
    start->next->next=(head *)malloc(sizeof(head));
    create(start->next);
    }
    return;
 }
 void print(head *temp)
 {

    /*if(temp->next!=NULL)
    {
        printf("%d-->",temp->num);
        if(temp->next->next==NULL)
        {
            printf("%d",temp->next->num);
        }
        print(temp->next);
    }*/
    while(temp->next!=NULL)
    {
        printf("%5d",temp->next->num);
        temp=temp->next;
    }
    return;

 }
 int count(head *counting)
 {
    if(counting->next==NULL)
    {
        return(0);
    }
    else
    {
        return(1+count(counting->next));
    }
 }
 /*void add_node_end(head *temp)            // adding node at last
 {
    head *newnode1;
     newnode1=(head *)malloc(sizeof(head));
    printf("enter value to be inserted ");
    scanf("%d",&newnode1->num);

        while((temp->next)!=NULL)
        {
          temp=temp->next;
        }

        temp->next=newnode1;
       // temp->next=NULL;
    return;
 } */

/*
void add_node_beginning(head *start)
{
    head *newnode2;

    newnode2=(head *)malloc(sizeof(head));

    if(newnode2==NULL)
    {
        printf("no space");
    }
    else
    {

    //newnode2->next=NULL;
    printf("\nenter value you want to add at starting \n");
    scanf("%d",&newnode2->num);

    newnode2->next=start->next;

   start->next=newnode2;

       }
return;
}*/
void add_any_pos(head *temp)
{
    head *newnode3;
    int val,pos=0,key;
    //ptr=temp;
    printf("\nenter value of data to be inserted \n");
    scanf("%d",&val);
    printf("\n enter the value of key \n");
    scanf("%d",&pos);
    newnode3=(head *)malloc(sizeof(head));
    newnode3->num=val;
    while(temp->next->num!=key)
    {
        temp=temp->next;

    }
    newnode3->next=temp->next->next;
    temp->next=newnode3;
    return;
}





