#include <stdio.h>

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
}q;

void Create(struct Queue *q)
{
    printf("Enter the size of queue:\n");
    scanf("%d",&q->size);
    
    q->rear = q->front = 0;
    
    q->Q = (int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q,int x)
{
    if(q->rear+1%q->size == q->front)
    {
       printf("\nThe queue is full\n");
    }
    
    else
    {
        q->rear = q->rear+1%q->size;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q)
{   int x = -1;
    
    if(q->rear == q->front)
    {
        printf("\nThe queue is empty\n");
    }
    
    else
    {
        q->front = q->front+1%q->size;
        x = q->Q[q->front];
    }
    return x;
}

void display(struct Queue q)
{
    int i = q.front+1;
    do
    {
        printf("%d ",q.Q[i]);  
        i = (i+1)%q.size;
    
    }while(i!=(q.rear+1)%q.size);    
}
int main()
{
    Create(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    display(q);
    printf("\nThe deleted element is %d",dequeue(&q));
    return 0;
}

