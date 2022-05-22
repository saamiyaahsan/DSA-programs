#include <stdio.h>
#include<stdlib.h>
struct Node
{   int data;
    struct Node *next;
}*first;
void create(int A[],int n)
{ struct Node *t,*last;
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
{ while(p!=NULL)
  {
      printf("%d\t",p->data);
      p = p->next;
  }    
}
int improvedLS(struct Node *p,int key)
{  struct Node *q;
   while(p!=NULL) 
   { if(key == p->data)
     q->next = p->next;
     p->next = first;
     first = p;
      return p;
   }   
    q=p;
    p=p->next;  
       
}
int main()
{  int A[] = {2,3,5,6,8,9,10,11,14,15};
   create(A,10);    
   display(first);
   printf("\n%d",improvedLS(first,8));
    return 0;
}

