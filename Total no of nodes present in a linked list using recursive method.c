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
int count(struct Node *p)
{ if(p!=NULL)
  return 1+count(p->next);    
  else
  return 0;    
}
int main()
{   int A[] = {2,3,4,5,6,8,10};
    create(A,7);
    printf("Total number of nodes present in a linked list is %d",count(first));
    return 0;
}

