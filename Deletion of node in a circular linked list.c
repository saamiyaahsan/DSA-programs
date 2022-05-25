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
  head = (struct Node *)malloc(sizeof(struct Node));
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

void display(struct Node *h)
{
    do
    {  printf("%d\t",h->data);
        h  = h->next;
     }while(h!=head);
}

int delete(int pos)
{   int x;
    struct Node *p;
    p=head;
    
    if(pos == 0)
    { 
       while(p->next != head)    
      {
          p=p->next;
      }
      
      p->next = head->next;
      x = head->data;
      head = head->next;
      return x;
    }
    
    else
    {   struct Node *q;
        int i;
        for(i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        
        q=p->next;
        p->next = q->next;
        
        x=q->data;
        free(q);
        return x;
    }
}
int main()
{   int A[] = {2,3,4,5,6};
    create(A,5);
    printf("The deleted data in the node is %d",delete(3));
    printf("\n");
    printf("\nThe new circular linked list is as follows:\n");
    display(head);
    return 0;
}
