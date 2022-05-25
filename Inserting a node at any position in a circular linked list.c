#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*head;

void create(int A[],int n)
{
    struct Node *t,*last;
    int i;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = head;
    last = head;
    for(i=1;i<n;i++)
    {t = (struct Node *)malloc(sizeof(struct Node));
     t->data = A[i];    
     t->next = last->next;
     last->next = t;
     last = t;
    }
}
void display(struct Node *h)
{   do
    { printf("%d\t",h->data);
        h = h->next;
    }while(h!=head);
}

void insert(int x,int pos)
{
    struct Node *t,*p;
    p=head;
    if(pos == 0)
    {
      t = (struct Node *)malloc(sizeof(struct Node));
      t->data = x;
      if(head == NULL)
      {
          head = t;
          head->next = head;
      }   
      
      else
      {
          t->next = head;
          while(p->next != head)
          {
              p=p->next;
          }
          p->next = t;
          t->next = head;
          head = t;
      }
    } 
    
    else
    { int i;
      t = (struct Node *)malloc(sizeof(struct Node));  
      t->data = x;
      for(i=0;i<pos-1;i++)
      {
          p = p->next;
      }
      t->next = p->next;
      p->next = t;
    }
    
}
int main()
{   int A[] = {2,3,4,5,6,7};
    create(A,6);
    insert(8,0);
    display(head);
    return 0;
}

