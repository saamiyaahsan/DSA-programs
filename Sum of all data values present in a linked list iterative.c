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
  { t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i]; 
    t->next = NULL;
    last->next = t;
    last = t;
  }
}
int sum(struct Node *p)
{ int s=0;
  while(p!=NULL)    
  {
      printf("%d\t",p->data);
      s = s + p->data;
      p = p->next;
  }    

 printf("\nThe sum of all data value in a linked list is %d",s);    
}
int main()
{   int A[] = {2,3,5,6,8,10};
    create(A,6);
    sum(first);
    return 0;
}

