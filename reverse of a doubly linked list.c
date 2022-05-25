#include <stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first;

void create(int A[],int n)
{ struct Node *t,*last;
  int i;    
  first = (struct Node *)malloc(sizeof(struct Node));    
  first->data = A[0];    
  first->next = first->prev = NULL;
  last = first;
  for(i=1;i<n;i++)
  {
      t = (struct Node *)malloc(sizeof(struct Node));
      t->data = A[i];
      t->next = last->next;
      t->prev = last;
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

void reverse(struct Node *p)
{
    while(p->next!=NULL)
    {
        p=p->next;
    }
    
    while(p!=NULL)
    
    {
    printf("%d\t",p->data);
    p=p->prev;
    }
}

int main()
{   int A[] = {10,20,30,40,50,60};
    create(A,6);
    display(first);
    printf("\n");
    printf("The reverse of a linked list is\n");
    reverse(first);
    return 0;
}
