/*
  
     Input  : “marve89llous121”
     Output : 89121
     
     Input  : Demo
     Output :

*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void DisplayDigit(char *Str)
{
   for(;*Str!='\0';Str++)
    {
      if(*Str>=48&&*Str<=57)
       {
         printf("%c ",*Str);
       }
      else
       {
         continue;
       }
    }
    
    return;
}

int main()
{
  char Arr[30];
  
  printf("Enter String: ");
  scanf("%[^'\n']s",&Arr);
  
  DisplayDigit(Arr);
  
  getch();
  return 0;
}