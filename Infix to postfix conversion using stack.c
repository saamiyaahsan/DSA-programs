#include <stdio.h>
#include<stdlib.h>
#include<string.h>
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
        printf("\nStack Overflow");
    }
    
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop()
{  char x = -1;
    if(top == NULL)
    {
        printf("\nStack Underflow");
    }
    
    else
    {
        struct Node *t;
        t = top;
        x=t->data;
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

int pre(char x)
{
    if(x == '+' || x == '-')
    {
        return 1;
    }
    
    else if(x == '*' || x == '/')
    {
        return 2;
    }
     
    return 0; 
}

int isOperand(char x)
{
    if(x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 0;
    }
    
    else
    {
        return 1;
    }
}

char *convert(char *infix)
{
    char *postfix;
    int i=0,j=0;
    int len = strlen(infix);
    postfix = (char *)malloc((len+2)*sizeof(char));
    
    while(infix[i] != '\0')
    {
        if(isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        
        else
        {
            if(pre(infix[i]) > pre(top->data))
            {
                push(infix[i++]);
            }
            
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    
    while(top!=NULL)
    {
       postfix[j++] = pop();   
    }
    
    postfix[j] = '\0';
    
return postfix;    
}
int main()
{    char *infix = "a+b*c-d/e";
     push('#');
         printf("%s",convert(infix));
      
    return 0;
}

