/*
  
     Input  : Physics
     Output : 0
     
     Input  : Physics Chemistry Maths
     Output : 2

*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int Count_White(char *Str)
{
   int Cnt=0;
   
   for(;*Str!='\0';Str++)
    {
      if(*Str==32)
       {
         Cnt++;
       }
      else
       {
         continue;
       }
    }
    
    return Cnt;
}

int main()
{
  char Arr[30];
  int iRet=0;
  
  printf("Enter String: ");
  scanf("%[^'\n']s",&Arr);
  
  iRet=Count_White(Arr);
  
  printf("\nWhite Spaces Count = %d\n",iRet);
  
  getch();
  return 0;
}