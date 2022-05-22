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
{ while(p!=NULL)
  {
    printf("%d\t",p->data);  
    p = p->next;  
  } 
}
int linearSearch(struct Node *p,int key)
{
 if(p==NULL)
   return NULL;
 if(key==p->data)
   return p;

  return linearSearch(p->next,key);
}
int main()
{  int A[] = {2,4,6,8,10,13,14,16};
   create(A,8);
   display(first);
   printf("\n%d",linearSearch(first,14));
    return 0;
}

