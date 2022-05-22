#include <stdio.h>
int fun(int n)
{
    if(n>0)
    {
      return fun(n-1)+n;  
     }

    return 0;
}
int main()
{    int x;
     printf("Enter the value:");
     scanf("%d",&x);
    printf("\n%d",fun(x));

    return 0;
}
