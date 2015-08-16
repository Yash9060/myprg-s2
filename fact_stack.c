#include<stdio.h>
#define SIZE 50
int s[SIZE];
int top=-1;
void push();
void pop();
int main()
{
    push();
    pop();

  return 0;
}
void push()
{
    int val;

    printf("\n enter the number whose factorial you want to find ");
    scanf("%d",&val);

   while(val!=1)
   {
    s[++top]=val;
    val--;
   }
   top=top+1;
    s[top]=1;
    return;

}
void pop()
{
  int num,fact=1;
  while(top!=-1)
 {
    num=s[top--];
    fact=fact*num;
 }
 printf("\n value is %d",fact);
    return;
}
