#include <stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;    
}*front,*rear;

void enqueue(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    
    if(t==NULL)
    {
        printf("The queue is full");
    }
    else
    {
        if(front == NULL)
        {
            t->data = x;
            t->next = NULL;
            front = rear = t;
        }
        
        else
        {
            t->data = x;
            t->next = NULL;
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{   int x = -1;
    if(front == NULL)
    {
      printf("\nThe queue is empty");    
    }
    
    else
    {
        struct Node *t;
        t = (struct Node *)malloc(sizeof(struct Node));
        t=front;
        front = front->next;
        x = t->data;
    }
    return x;
}

void display()
{
    struct Node *p=front;
    
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    printf("\nThe deleted element is %d",dequeue());
    return 0;
}

