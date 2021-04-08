/*
  
     Input : “Marvellous Multi OS” 
     
     Output : marvellous multi os

*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Strlwrx(char *Str)
{
   for(;*Str!='\0';Str++)
    {
      if(*Str>=65&&*Str<=90)
       {
         *Str+=32;
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
  
  Strlwrx(Arr);
  
  printf("\nModified String = %s\n",Arr);
  
  getch();
  return 0;
}