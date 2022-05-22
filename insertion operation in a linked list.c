#include <stdio.h>
#include<stdlib.h>
struct Node
{  int data;
   struct Node *next;
}*first;
void create(int A[],int n)
{ struct Node *t,*last;
  int i;    
  first = (struct Node *)malloc(sizeof(struct Node));    
  first->data = A[0];    
  first->next =NULL;
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
{ while(p!=NULL)
  { printf("%d\t",p->data);
    p = p->next;  
  } 
}
int count(struct Node *p)
{ int c=0;
  while(p!=NULL)    
  {
      c++;
      p=p->next;
  }    
 return c;
}
void insert(struct Node *p,int index,int x)
{   int i;
    struct Node *t;
    if(index<0 || index > count(p))
      return;
     t = (struct Node *)malloc(sizeof(struct Node));
     t->data = x;
     
     if(index == 0)
    { t->next = first;
      first = t;    
    }
    
    else
    {
        for(i=0;i<index-1;i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}
int main()
{   int A[] = {2,3,4,6};
    create(A,4);
    insert(first,0,10);
    display(first);
    return 0;
}

