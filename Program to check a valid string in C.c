#include <stdio.h>
int valid(char *name)
{ int i;
  for(i=0;name[i]!='\0';i++)   
  {
     if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=49 && name[i]<=57)) 
     return 0;
  }    
    return 1;
}
int main()
{   char *name = "Sujan458";
    if(valid(name))
    printf("valid string");
    else
    printf("\nnot a valid string");
    return 0;
}

