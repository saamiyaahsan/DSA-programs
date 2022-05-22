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
int count(struct Node *p)
{int c = 0;
 while(p!=NULL)     
 { printf("%d\t",p->data);
     p = p->next;
     c++;
 }    
  printf("\nTotal no of nodes present in a linked list is %d",c);
}
int main()
{   int A[] = {2,3,5,7,9,10};
    int b;
    create(A,6);
    count(first);
    

    return 0;
}

