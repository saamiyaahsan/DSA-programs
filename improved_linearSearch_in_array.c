#include <stdio.h>
#include<stdlib.h>
struct Array
{  int A[20];
   int size;       
   int length;    
};
void swap(int *x,int *y)
{  int temp;
   temp = *x;    
   *x = *y;
   *y = temp;
}
void display(struct Array arr)
{ int i;
  for(i=0;i<arr.length;i++)    
  {
      printf("%d\t",arr.A[i]);
  }    
}
int LinearSearch(struct Array *arr,int key)
{ int i;
  for(i=0;i<arr->length;i++)    
  {   if(key == arr->A[i])
      return i;
      swap(arr->A[i],arr->A[0]);
      
  }    
}
int main()
{   struct Array arr = {{2,3,4,5,6,7,8},20,7};
    printf("The array is as follows:\n");
    display(arr);
    printf("The element is at index:\t");
    printf("%d",LinearSearch(&arr,5));

    return 0;
}

