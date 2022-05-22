#include <stdio.h>
#include<stdlib.h>
struct Array
{
  int A[20];    
  int size;    
  int length;    
};
int linearSearch(struct Array arr, int key)
{ int i;
  for(i=0;i<arr.length;i++)
   {
       if(key == arr.A[i])
       return i;
   }
   return -1; 
}
void display(struct Array arr)
{  int i;
   for(i=0;i<arr.length;i++)    
   {
       printf("%d\t",arr.A[i]);
   }    
    
}
int main()
{
    struct Array arr = {{2,3,4,5,6,7,8},20,7};
    printf("The array is as follows:\n\n");
    display(arr);
    printf("\nThe element is at index:%d",linearSearch(arr,4));
    return 0;
}

