#include <stdio.h>
#include<stdlib.h>
struct Node
{
    char data;
    struct Node *next;
}*top;

void push(char x)
{
    struct Node *t;    
    t = (struct Node *)malloc(sizeof(struct Node));
    
    if(t==NULL)
    {
        printf("Stack Overflow");
    }
    
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop()
{   char x = -1;
    if(top == NULL)
    {
        printf("\nStack Underflow");
    }
    
    else
    { 
      struct Node *t;  
      t = top;
      x = t->data;
      top = top->next;
    }
    return x;
}

void display()
{ struct Node *p;
    
   while(p!=NULL)    
   {
       printf("%d\n",p->data);
       p=p->next;
   }    
}

int isBalance(char *Exp)
{
    int i;
    for(i=0;Exp[i]!='\0';i++)
    {
        if(Exp[i] == '(')
        {
            push(Exp[i]);
        }
        
        else if(Exp[i] == ')')
        {
            if(top == NULL)
            {
                return 0;
            }
            
            else
            {
                pop();
            }
        }
    }
    
    if(top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{   char *Exp = "((a+b)*(c+d))";
    printf("%d",isBalance(Exp)); 
    return 0;
}

