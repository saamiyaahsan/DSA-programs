#include <stdio.h>
#include<stdlib.h>
struct Node
{   
    struct Node *prev;
    int data;
    struct Node *next;
}*first;

void create(int A[],int n)
{ 
  struct Node *t,*last;
  int i;    
  first = (struct Node *)malloc(sizeof(struct Node));    
  first->data = A[0];    
  first->next = first->prev = NULL;    
  last = first;    
  for(i=1;i<n;i++)
  { 
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];  
    t->next = last->next;
    t->prev = last;
    last->next = t;
    last = t;
  }
}

void display(struct Node *p)
{
   while(p!=NULL)    
    {
       printf("%d\t",p->data);
       p = p->next;
    }
}

int length(struct Node *p)
{  int len = 0;
   while(p != NULL)    
  {
     len++;
     p = p->next; 
  }    
  printf("\nThe length of a linked list is %d",len);    
}
int main()
{    int A[] = {5,10,15,20,25,30};
     create(A,6);
     display(first);
     length(first);
    return 0;
}

