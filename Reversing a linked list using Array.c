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
void display(struct Node *p)
{
    while(p!=NULL)
     {
         printf("%d\t",p->data);
         p = p->next;
     }    
}
int count(struct Node *p)
{   int c=0;
    while(p!=NULL)
  { 
     c++;
     p=p->next; 
  }    
 return c;    
}
void Reverse1(struct Node *p)
{
int *A,i=0;
struct Node *q=p;

A=(int *)malloc(sizeof(int)*count(p));
while(q!=NULL)
{
A[i]=q->data;
q=q->next;
i++;
}
q=p;
i--;
while(q!=NULL)
{
q->data=A[i];
q=q->next;
i--;
}
}
int main()
{
    int A[] = {2,3,4,5,6,7,9,10,11,14};
    
    create(A,10);
    Reverse1(first);
    display(first);
    return 0;
}
