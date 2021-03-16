#include <stdio.h>

//Compiler version gcc  6.3.0

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
  if(iNo1==iNo2)
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
   int iValue1=0,iValue2=0;
   BOOL bRet=FALSE;
   
   printf("Enter Two Numbers: ");
   scanf("%d%d",&iValue1,&iValue2);
   
   bRet=ChkEqual(iValue1,iValue2);
   
   if(bRet==TRUE)
    {
      printf("\nEqual\n");
    }
   else
    {
      printf("\nNot Equal\n");
    }
 
   return 0;
}
