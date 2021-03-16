#include <stdio.h>

//Compiler version gcc  6.3.0

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
  if(iNo>100)
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
   int iValue=0,bRet=0;
   
   printf("Enter Number: ");
   scanf("%d",&iValue);
   
   bRet=ChkGreater(iValue);
   
   if(bRet==TRUE)
    {
      printf("\nEntered Number %d Is Greater Than 100\n",iValue);
    }
   else
    {
      printf("\nEntered Number %d Is Less Than 100\n",iValue);
    }
 
   return 0;
}