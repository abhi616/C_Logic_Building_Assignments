/*
    Input : F 
    Output : TRUE 

    Input : d 
    Output : FALSE
*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkCapital(char Ch)
{
   if(Ch>=65&&Ch<=90)
   {
     return TRUE;
   }
   else
   {
     return FALSE;
   }
   
}

int main()
{
  char cValue='\0';
  BOOL bRet=FALSE;
  
  printf("Enter Character: ");
  scanf("%c",&cValue);
  
  bRet=ChkCapital(cValue);
  
  if(bRet==TRUE)
  {
    printf("\nIt Is Capital\n");
  }
  else
  {
    printf("\nIt Is Not Capital\n");
  }
  
  getch();
  
  return 0;
}
