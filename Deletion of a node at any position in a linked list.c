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
{ 
   while(p!=NULL)  
  { 
    printf("%d\t",p->data);    
    p=p->next;
  } 
}
int delete(int pos)
{  struct Node *p,*q;
   int x,i;
   if(pos == 1)    
   {
       p=first;
       x=first->data;
       first = first->next;
       free(p);
   }
   
   else
   { p = first;
     for(i=0;i<pos-1 && (p!=NULL);i++)  
     {
         q=p;
         p=p->next;
     } 
     if(p!=NULL)
     { q->next = p->next;
       x=p->data;  
       free (p);  
     }  
     
   } 
   return x;
}
int main()
{    int A[] = {2,3,4,6,7,9,10,11,13};
     create(A,9);
     display(first);
     printf("\n");
     printf("The deleted data content of the node is %d\n",delete(1));
     display(first);
     return 0;
}

