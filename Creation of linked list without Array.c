#include <stdio.h>
#include<stdlib.h>
struct Node
{  int data;
   struct Node *next;
    
}*first;
int count(struct Node *p)
{ int c=0;
  while(p!=NULL)      
  { c++;
    p = p->next;  
  }    
 return c;    
}
void display(struct Node *p)
{ while(p!=NULL)
  {  printf("%d\t",p->data);
     p = p->next; 
  }    
}
void insert(struct Node *p,int index,int x)
{   struct Node *t;
    int i;
    if(index < 0 || index > count(p))
    return;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    if(index == 0)
    {  t->next = first;
       first = t;    
    }
    
    else
    { for(i=0;i<index-1;i++)
      {
          p = p->next;
      }    
        t->next = p->next;
        p->next = t;
    }
}
int main()
{  printf("The data contents present in the linked list is as follows:\n");
   insert(first,0,3);
   insert(first,1,5);
   insert(first,2,7);
   insert(first,1,4);
   display(first);    

    return 0;
}

