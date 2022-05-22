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
int max(struct Node *p)
{ int max = -32768;
  while(p!= NULL)
  { if(p->data > max)
    {
      max = p->data;  
      p = p->next;  
    }
  }
return max;
}
int main()
{   int A[] = {2,4,5,6,8,9,12,14};
    create(A,8);
    display(first);
     printf("\nThe maximum element of the linked list is %d",max(first));
    return 0;
}

