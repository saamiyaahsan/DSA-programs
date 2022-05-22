#include <stdio.h>
#include<stdlib.h>
struct Node
{
   int data;    
   struct Node *next;    
}*first;
void create(int A[],int n)
{ struct Node * t,*last;
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
void insertSort(struct Node *p,int x)
{ struct Node *q,*t;
  p = first;
  while(p!=NULL && p->data < x)    
    { q = p;
      p = p->next;
    }
     t=(struct Node *)malloc(sizeof(struct Node));
     t->data = x;
     t->next = q->next;
     q->next = t;
}
int main()
{   int A[] = {2,3,4,6,7,9,10,12,13};
    create(A,9);
    insertSort(first,8);
    insertSort(first,15);
    display(first);
    return 0;
}

