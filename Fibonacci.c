#include <stdio.h>
void fibonacci(int n)
{  int i,a,b,c;
   a=0;
   b=1;    
   printf("\n%d",a);
   printf("\n%d",b);
   for(i=2;i<n;i++)
   {  c=a+b;
       printf("\n%d",c);
     
      a=b;       
      b=c;
       
   }    
}
int main()
{   int x;
    printf("Enter the total no of terms:\n");
    scanf("%d",&x);
    fibonacci(x);
    return 0;
}

