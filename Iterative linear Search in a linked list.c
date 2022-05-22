#include <stdio.h>
#include<stdlib.h>
struct Node
{ int data;
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
int linearSearch(struct Node *p,int key)
{
  while(p!=NULL)
  {
    if(key == p->data)  
      return p;
    else
      p = p->next;
  } 
 return -1;
}
int main()
{
    int A[] = {2,3,5,6,7,8,10,14,15};
    create(A,9);
    display(first);
    printf("\n%d",linearSearch(first,18));
    return 0;
}

