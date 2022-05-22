#include <stdio.h>
int fact(int n)
{  if(n>0)
 
 { return fact(n-1)*n ;
 }    
 return 1;   
}
int main()
{    int x,r;
     printf("Enter the number whose factorial is to be printed\n");
     scanf("%d",&x);
     r=fact(x);
     printf("\n%d",r);
    return 0;
}

