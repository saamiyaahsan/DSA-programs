#include <stdio.h>
#include<stdlib.h>
struct Array
{
   int A[20];   
   int size;    
   int length;    
};
void display(struct Array arr)
{  int i;
  for(i=0;i<arr.length;i++)
  printf("%d\t",arr.A[i]);    
}
int get(struct Array arr,int index)
{ 
  if(index>=0 && index<=arr.length-1)  
  return arr.A[index];
  return -1;
}
int set(struct Array *arr,int index,int key)
{ if(index>=0 && index<=arr->length-1)
  arr->A[index] = key;    
 }
int main()
{   struct Array arr = {{2,3,4,5,6,7,8,9,10,11,12,13,14,15,17},20,15};
    display(arr);
    printf("\n");
    printf("\nThe element present at given index is\n");
    printf("%d",get(arr,18));
    set(&arr,6,22);
    display(arr);
    return 0;
}

