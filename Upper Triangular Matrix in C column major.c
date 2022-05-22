#include <stdio.h>
#include<stdlib.h>
struct Matrix
{
 int *A;   
 int n;    
};
void set(struct Matrix *m,int i,int j,int x)
{  if(j>=i)
   m->A[j*(j-1)/2 + i-1] = x;
    
}
int get(struct Matrix m,int i,int j)
{   if(j>=i)
    return m.A[j*(j-1)/2 + i-1];   
    else
    return 0;
}
void display(struct Matrix m)
{int i,j;
 for(i=1;i<=m.n;i++)
  { 
      for(j=1;j<=m.n;j++)
      {
        if(j>=i)
        printf("%d\t",m.A[j*(j-1)/2 + i-1]);
        else
        printf("0\t");
      }
     printf("\n"); 
  }
    
}
int main()
{   int i,j,x;
    struct Matrix m;
    printf("Enter dimensions");
    scanf("%d",&m.n);
    m.A = (int *)malloc(m.n*(m.n+1)/2*sizeof(int));
    printf("Enter all elements");
    for(i=1;i<=m.n;i++)
    {
      for(j=1;j<=m.n;j++)
      {
         scanf("%d",&x); 
         set(&m,i,j,x); 
      }  
        
    }
    printf("\n\n");
    display(m);
    return 0;
}


