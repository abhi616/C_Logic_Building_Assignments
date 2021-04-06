/*
    Input : 7 
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

BOOL ChkDigit(char Ch)
{
   if(Ch>=48&&Ch<=57)
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
  
  bRet=ChkDigit(cValue);
  
  if(bRet==TRUE)
  {
    printf("\nIt Is Digit\n");
  }
  else
  {
    printf("\nIt Is Not Digit\n");
  }
  
  getch();
  
  return 0;
}