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
int isLoop(struct Node *x)
{
    struct Node *p,*q;
    p=q=first;
    
    do
    { 
      p=p->next;  
      q=q->next;    
      if(q!=NULL)
      {
          q=q->next;
      }
      else
      {
          q=NULL;
      }
    } while(p!=NULL && q!=NULL);
     
     if(p==q)
      {
          return 1;
      }
      else
      {
          return 0;
      }
}
int main()
{   int A[] = {2,3,4,6,7,9,10,12,13};
    create(A,9);
    display(first);
    printf("\n%d",isLoop(first));
    return 0;
}


