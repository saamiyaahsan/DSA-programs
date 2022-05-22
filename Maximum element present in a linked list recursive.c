#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first;

void create(int A[],int n)
{ 
  struct Node *t,*last; 
  int i;    
  first = (struct Node *)malloc(sizeof(struct Node));    
  first->data = A[0];
  first->next = NULL;
  last = first;
  for(i=1;i<n;i++)
  { 
    t = (struct Node *)malloc(sizeof(struct Node));
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
int RMAX(struct Node *p)
{ int x=0;
  if(p==0)
    return -32768;
  x=RMAX(p->next);
    if(x>p->data)
    return x;
  else
    return p->data;
}
int main()
{   int A[] = {2,3,4,5,7,8,12,14,16};
    create(A,9);
    display(first);
    printf("\nMaximum element present in the linked list is %d",RMAX(first));
    return 0;
}

