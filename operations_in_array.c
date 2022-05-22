#include <stdio.h>
#include<stdlib.h>
struct Array
{  int A[20];
   int size;    
   int length;    
};

void Display(struct Array arr)
{  int i;
   printf("Elements are\n");
   for(i=0;i<arr.length;i++)    
    printf("%d\t",arr.A[i]);
}

void Append(struct Array *arr,int x)
{
 if(arr->length<arr->size)
 {
     arr->A[arr->length++] = x;
     
 }
}

void insert(struct Array *arr,int index,int x)
{
     int i;
    if(index>=0 && index <=arr->length)
    {  for(i=arr->length;i>index;i--)
       arr->A[i] = arr->A[i-1];
       arr->A[index] = x;
       arr->length++;
        
    }
    
    
}
int delete(struct Array *arr,int index)
{  int x = 0,i;
   if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
       for(i=index;i<arr->length;i++)
       arr->A[index] = arr->A[index+1];
       arr->length--;
       return x;
    }
return 0; 
}
int LinearSearch(struct Array arr,int key)
{ int i;
      
  for(i=0;i<arr.length;i++)  
    {
        if(key == arr.A[i])
        return i;
    }
   return -1; 
}
int main()
{
   struct Array arr = {{2,3,4,5,6},20,5};
  
  Append(&arr,10);
  Display(arr);
  insert(&arr,2,12);
  Display(arr);
  printf("%d",delete(&arr,3));
  Display(arr);
  printf("\nThe element is at index");
  printf("\n%d\n",LinearSearch(arr,3));
    return 0;
}


