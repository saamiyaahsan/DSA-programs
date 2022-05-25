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

int pop()
{ int x = -1;
      
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
  printf("\n");
}
int main()
{  
   push(10); 
   push(20);
   push(30);
   push(40);
   push(50);
   display();
   
   printf("The deleted element is %d",pop());
    return 0;
}
