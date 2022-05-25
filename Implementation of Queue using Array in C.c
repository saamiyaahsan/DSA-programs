#include <stdio.h>
#include<stdlib.h>
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q)
{
    printf("Enter size of the queue:\n");
    scanf("%d",&q->size);
    
    q->front = q->rear = -1;
    
    q->Q = (int*)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q,int x)
{
    if(q->rear == q->size-1)
    {
        printf("\nQueue is full");
    }
    
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
    
}

int dequeue(struct Queue *q)
{  int x=-1;
    
    if(q->front == q->rear)
    {
        printf("\nQueue is empty");
    }
    
    else
    {
        q->front++;
        x = q->Q[q->front];    
    }
    return x;
}

void display(struct Queue q)
{
    int i;
    for(i=q.front+1;i<=q.rear;i++)
    {
        printf("%d\t",q.Q[i]);
    }
    printf("\n");
}
int main()
{  struct Queue q;
   create(&q);
   enqueue(&q,10);
   enqueue(&q,20);
   enqueue(&q,30);
   enqueue(&q,40);
   display(q);
   
   printf("\nThe element deleted is %d",dequeue(&q));
    return 0;
}

