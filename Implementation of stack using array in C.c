#include <stdio.h>
#include<stdlib.h>
struct Stack
{
    int size;
    int top;
    int *S;
}st;

void create(struct Stack *st)
{
    printf("Enter the size of stack:\n");
    scanf("%d",&st->size);
    
    st->top = -1;
    
    st->S = (int *)malloc(st->size*sizeof(int));
}

void display(struct Stack st)
{ int i;
    
  for(i=st.top;i>=0;i--)    
  {
      printf("%d",st.S[i]);
      printf("\n");
  }    
}

void push(struct Stack *st,int x)
{
    if(st->top == st->size - 1)
    {
        printf("\nStack Overflow");
    }
    
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(struct Stack *st)
{  int x = -1;
    if(st->top == -1)
    {
        printf("\nStack Underflow");
    }
    
    else
    {
        x=st->S[st->top];
        st->top--;
    }
    
    return x;
}

int StackTop(struct Stack st)
{
    if(st.top == -1)
    {
        return -1;
    }
    
    else
    {
        return st.top;
    }
}

int isFull(struct Stack st)
{
    if(st.top == st.size - 1)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}

int isEmpty(struct Stack st)
{
    if(st.top == -1)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}

int peek(struct Stack st,int index)
{     int x = -1;
    
     if(st.top-index+1 < 0)
     {
         printf("\nInvalid Index\n");
     }
     else
     {
         x = st.S[st.top-index+1];
     }
     return x;
}
int main()
{
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    pop(&st);
    display(st);
    printf("\nThe value of top is %d",StackTop(st));
    printf("\nThe element is %d",peek(st,3));
    return 0;
}
