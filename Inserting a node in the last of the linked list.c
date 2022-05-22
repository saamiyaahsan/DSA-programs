#include <stdio.h>
#include<stdlib.h>
struct Node
{ int data;
  struct Node *next;    
    
}*first;
void create(int A[],int n)
{  struct Node *t,*last;
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
void insertLast(int x)
{ struct Node *t,*last;
  t = (struct Node *)malloc(sizeof(struct Node));
  t->data = x;
  t->next = NULL;
  if(first == NULL)    
  {
      first = last = t;
  }    
  else
  {
     last->next = t; 
     last = t; 
  }
    
}
int main()
{  int A[] = {2,3,4,6,7,8,10,11};
   create(A,8);    
   insertLast(13);
   display(first);
    return 0;
}

