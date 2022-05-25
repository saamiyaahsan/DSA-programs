#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*head;

void create(int A[],int n)
{ struct Node *t,*last;
  int i;
  head = (struct Node*)malloc(sizeof(struct Node));    
  head->data = A[0];    
  head->next = head;
  last = head;
  for(i=1;i<n;i++)
  { t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];  
    t->next = last->next;
    last->next = t;
    last = t;
  }
}
int Rdisplay(struct Node *h)
{
    static int flag = 0;
    if(h!=head || flag == 0)
    {   flag = 1;
        printf("%d\t",h->data);
        return Rdisplay(h->next); 
    }
    
}
int main()
{  int A[] = {2,3,4,5,6};
   create(A,5);
   Rdisplay(head);
    return 0;
}

