#include <stdio.h>
#include<stdlib.h>
struct Array 
{
    int A[20];
    int size;
    int length;
};
void display(struct Array arr)
{ int i;
  for(i=0;i<arr.length;i++)    
  {
      printf("%d\t",arr.A[i]);
  }    
    
}

int main()
{   struct Array arr = {{2,3,4,5,6,7,8,9},20,8};
    printf("The array displayed is as follows:\n");
    display(arr);
    

    return 0;
}

