/*
    Input : a 
    Output : TRUE 

    Input : D 
    Output : FALSE
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSmall(char Ch)
{
   if(Ch>=97&&Ch<=122)
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
  
  bRet=ChkSmall(cValue);
  
  if(bRet==TRUE)
  {
    printf("\nIt Is Small Case Character\n");
  }
  else
  {
    printf("\nIt Is Not Small Case Character\n");
  }
  
  getch();
  
  return 0;
}