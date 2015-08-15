#include<stdio.h>
#include<ctype.h>
#define SIZE 50
void push(char elem);
char pop();
int priority(char elem);
char s[SIZE];
int top =-1;

int main()
{


    char infix[50],postfix[50],ch,elem;
    int i=0,k=0;
    printf("\n enter your infix equation \n");
    scanf("%s",infix);
    push('#');
    while((ch=infix[i++])!='\0')
    {
        if(ch=='(')
            {
                push(ch);
            }
        else if(isalnum(ch))
            {
                postfix[k++]=ch;
            }
        else if(ch==')')
        {
            while(s[top]!='(')
            {
                postfix[k++]=pop();
            }
             elem=pop();
        }
        else
        {
            while(priority(s[top])>=priority(ch))
                postfix[k++]=pop();
                push(ch);
        }
    }

while(s[top]!='#')
    postfix[k++]=pop();
    postfix[k]='\0';
    printf("\n given postfix string is  %s",postfix);
}
void push(char elem)
{
    top=top+1;
    s[top]=elem;

}
char pop()
{
    return(s[top--]);
}

int priority(char elem )
{
     switch (elem)
     {
         case '#':
          return 0;
         case '(':
          return 1;
         case '+':
         case '-':
          return 2;
         case '*':
         case '/':
          return 3;
    }
}




