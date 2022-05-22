#include <stdio.h>
#include<stdlib.h>
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
int sum(struct Array arr)
{ int sum = 0;
  for(int i=0;i<arr.length;i++)    
  {
      sum = sum + arr.A[i];
  }    
 return sum;   
}
int avg(struct Array arr)
{ int p = sum(arr);
  float avg = p/arr.length;
    return avg;
}
int Max(struct Array arr)
{
int max=arr.A[0];
int i;
for(i=1;i<arr.length;i++)
{
if(arr.A[i]>max)
max=arr.A[i];
}
return max;
}
int Min(struct Array arr)
{
int min=arr.A[0];
int i;
for(i=1;i<arr.length;i++)
{
if(arr.A[i]<min)
min=arr.A[i];
}
return min;
}
int main()
{    struct Array arr = {{1,2,3,4,5,6,7,8},20,8};
     display(arr);
     printf("\nThe sum of all elements of an array is:\n");
     printf("%d",sum(arr));
     printf("\nThe average of all elements of the array is:\n");
     printf("%d",avg(arr));
     printf("\nThe maximum of all elements of the array is:\n");
     printf("%d",Max(arr));
     printf("\nThe minimum of all elements of the array is:\n");
     printf("%d",Min(arr));
    
    
    return 0;
}

