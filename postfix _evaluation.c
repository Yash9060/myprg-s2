#include<stdio.h>
#include<ctype.h>
#define SIZE 50
void push(int a);
char pop();
char s[SIZE];
int top =-1;

int main()
{
    char postfix[50],ch;
    int i=0,x,y,value;
   printf("\n append a # at end of equation \n");
   scanf("%s",postfix);
   while((ch=postfix[i++])!='#')
   {
        if(isdigit(ch))
        {
            push(ch-'0');
        }
        else
        {

            x=pop();
            y=pop();
          switch(ch)
          {
            case'+':
                push(x+y);
                break;
            case'-':
                push(x-y);
                break;
            case'*':
                push(x*y);
                break;
            case'/':
                push(x/y);
                break;
          }
        }
   }

value=pop();
printf("\n value is %d",value);
}
void push(int a)
{
    top=top+1;
    s[top]=a;
    return ;
}
char pop()
{
    return(s[top--]);
}

