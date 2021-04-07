/*
     Input : “MarvellouS”
     Output : 6    (8-2)
*/ 


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int Difference(char *Str)
{ 
   int C_Cnt=0,S_Cnt=0;
   
   while(*Str!='\0')
    {
      if(*Str>=65&&*Str<=90)
       {
         C_Cnt++;
       }
      else
       {
         S_Cnt++;
       }
       
      Str++;
    }
    
   return S_Cnt-C_Cnt;   
}

int main()
{  
  char Arr[20]; 
  int iRet=0;
  
  printf("Enter String: ");
  scanf("%[^'\n']s",&Arr);
  
  iRet=Difference(Arr);
   
  printf("\nSmall Letters & Capital Count Difference = %d\n",iRet);
     
  getch();
  
  return 0;
}