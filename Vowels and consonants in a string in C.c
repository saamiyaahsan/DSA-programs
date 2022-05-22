#include <stdio.h>

int main()
{   char s[] = "Saamiya";
    int i,a=0,b=0;
    for(i=0;s[i]!='\0';i++)
    {
     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' 
     || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' 
     || s[i] == 'O' || s[i] == 'U')   
     {
         a++;
     }
     else if(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)    
     {
         b++;
     }    
}
   printf("Total no of vowels is %d",a);
   printf("\nTotal no of consonants is %d",b);
    return 0;
}

