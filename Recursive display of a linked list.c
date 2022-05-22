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
void Rdisplay(struct Node *p)
{
  if(p!=NULL)
  {
      printf("%d\t",p->data);
      Rdisplay(p->next);
  }
}
int main()
{  int A[] = {12,5,6,8,9,20};
   create(A,6);        
   Rdisplay(first);
    return 0;
}

