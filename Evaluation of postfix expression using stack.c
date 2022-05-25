#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*top;

void push(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    
    if(t == NULL)
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

int pop()
{   int x = -1;
    
    if(top == NULL)
    {
        printf("\nStack Underflow");
    }
    
    else
    { struct Node *t;
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

int Eval(char *postfix)
{
    int i,x1,x2,r;
    
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isOperand(postfix[i]))
        {
            push(postfix[i]- '0');
        }
        
        else
        { x2 = pop();
          x1 = pop();
          
          switch(postfix[i])
          {
              case '+': r = x1+x2;
                        push(r);
                        break;
              
              case '-': r = x1-x2;
                        push(r);
                        break;
              
              case '*': r = x1*x2;
                        push(r);
                        break;
                        
              case '/': r = x1/x2;
                        push(r);
                        break;
          }
        }
    }
return pop();
}
int main()
{  char *postfix="234*+82/-";
   
   printf("%d",Eval(postfix));
    return 0;
}

