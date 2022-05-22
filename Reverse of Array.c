#include <stdio.h>
struct Array
{ int A[20];
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
void reverse(struct Array arr)
{ for(int i=arr.length-1;i>=0;i--)
  {
      printf("%d\t",arr.A[i]);
  }    
    
    
}
int main()
{   struct Array arr = {{2,3,4,5,6,7,8},20,7};
    display(arr);
    printf("\nThe reverse of an array is:\n");
    reverse(arr);
    return 0;
}

