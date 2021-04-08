/*
  
     Input : “Marvellous Multi OS” 
     
     Output : MARVELLOUS MULTI OS

*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Struprx(char *Str)
{
   for(;*Str!='\0';Str++)
    {
      if(*Str>=97&&*Str<=122)
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
  
  Struprx(Arr);
  
  printf("\nModified String = %s\n",Arr);
  
  getch();
  return 0;
}