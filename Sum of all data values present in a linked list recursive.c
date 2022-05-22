#include <stdio.h>
#include<stdlib.h>
struct Node
{
  int data;    
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
  {
     t = (struct Node *)malloc(sizeof(struct Node)); 
     t->data = A[i];
     t->next = NULL;
     last->next = t;
     last = t;
  }
}
void display(struct Node *p)
{ if(p!=NULL)
  {
      printf("%d\t",p->data);
      display(p->next);
  }    
}
int sum(struct Node *p)
{ if(p!=NULL)
  return p->data + sum(p->next);    
  else    
  return 0;    
}
int main()
{   int A[] = {2,3,5,7,8,9,12};
    create(A,7);
    display(first);
    printf("\nThe sum of all the data values in the linked list is %d",sum(first));
    return 0;
}

