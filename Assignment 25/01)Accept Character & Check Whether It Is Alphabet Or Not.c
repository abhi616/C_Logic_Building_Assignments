/*
      Input : F 
      Output : TRUE 
     
      Input : & 
      Output : FALSE
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkAlpha(char Ch)
{
  if((Ch>=65&&Ch<=90)||(Ch>=97&&Ch<=122))
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
  
  printf("Enter The Character: ");
  scanf("%c",&cValue);
  
  bRet=ChkAlpha(cValue);
  
  if(bRet==TRUE)
   {
     printf("\nIt Is Character\n");
   }
  else
   {
     printf("\nIt Is Not Character\n");
   }
   
  getch();
   
  return 0;
}