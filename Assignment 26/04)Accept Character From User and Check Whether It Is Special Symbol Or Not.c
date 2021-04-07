/*
     Input : % 
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


BOOL ChkSpecial(char Ch)
{ 
   if(!((Ch>=65&&Ch<=90)||(Ch>=97&&Ch<=122)||(Ch>=48&&Ch<=57)))
    {     
      return  TRUE;           
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
  
 bRet=ChkSpecial(cValue);  
  
  if(bRet==TRUE)
   {
     printf("\nIt Is Special Character/Symbol\n");
   }
  else
   {
     printf("\nIt Is Not a Special Character/Symbol\n");
   }
   
  getch();
  
  return 0;
}