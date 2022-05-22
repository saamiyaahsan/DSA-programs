#include <stdio.h>

int main()
{   char c[] = "BEAUTIFUL";
    int i,j,count=0;
    for(i=0;c[i]!='\0';i++)
    { count=0;
     for(j=i+1;c[j]!='\0';j++)
     {
      if(c[i] == c[j])
     { 
       count++;
          
      }     
     }   
    printf("\n%c is occured %d times",c[i],count+1);        
    }
    return 0;
}
