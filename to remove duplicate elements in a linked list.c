#include <stdio.h>
#include<stdlib.h>
struct Node
{
  int data;    
  struct Node *next;    
}*first;
void create(int A[],int n)
{  struct Node *t,*last;
   int i;    
   first = (struct Node *)malloc(sizeof(struct Node));    
   first->data = A[0];    
   first->next = NULL;
   last = first;
   for(i=1;i<n;i++)
   { t = (struct Node *)malloc(sizeof(struct Node));
     t->data = A[i];  
     t->next = NULL;
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
void duplicate(struct Node *p)
{ struct Node *q;
  p = first;    
  q = first->next;    
  while(q!=NULL)    
  { if(p->data != q->data)
    {
        p=q;
        q=q->next;
    }
    else
    { p->next = q->next;
      free(q);    
      q = p->next;    
    }
  } 
}
int main()
{   int A[] = {2,2,2,3,3,8,9,11,11,14};
    create(A,10);
    duplicate(first);
    display(first);
    return 0;
}

