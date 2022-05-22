#include <stdio.h>
#include<stdlib.h>
struct Array
{  int A[20];
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

int RBinarySearch(int A[],int l,int h,int key)
{ int mid;
  if(l<=h)    
  {  mid = (l+h)/2;
     if(key == A[mid]) 
      {
          return mid;
      }
     else if(key<A[mid]) 
      {
          return RBinarySearch(A,l,mid-1,key); 
      }
     else
      {
          return RBinarySearch(A,mid+1,h,key);
      }
      
  }
  
 return -1;   
}

int main()
{   struct Array arr = {{2,3,4,5,6,7,8,9,10,15},20,10};
    display(arr);
    printf("\nThe element is at index:\n");
    printf("%d",RBinarySearch(arr.A,0,9,5));
    return 0;
}

