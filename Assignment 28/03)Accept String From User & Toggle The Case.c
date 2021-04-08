/*
  
     Input : “Marvellous Multi OS” 
     
     Output : mARVELLOUS mULTI os

*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void StrTogglex(char *Str)
{
   for(;*Str!='\0';Str++)
    {
      if(*Str>=65&&*Str<=90)
       {
         *Str+=32;
       }
      else if(*Str>=97&&*Str<=122)
       {
         *Str-=32;
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
  
  StrTogglex(Arr);
  
  printf("\nModified String = %s\n",Arr);
  
  getch();
  return 0;
}