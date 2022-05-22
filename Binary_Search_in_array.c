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
int BinarySearch(struct Array arr,int key)
{ int l,mid,h;
  l = 0;    
  h = arr.length-1;    
  while(l<=h)
  {   mid = (l+h)/2;
      if(key == arr.A[mid])
     {
         return mid;
     } 
      
    else if(key<arr.A[mid])
      {
          h = mid-1;
      }
    else
    {
        l = mid+1;
    }
   }

    return -1;
}
int main()
{       struct Array arr = {{2,3,4,5,6,7,8},20,7};
        display(arr);
        printf("\nThe element is at index:\n");
        printf("\n%d",BinarySearch(arr,12));

    return 0;
}

