#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Compiler version gcc  6.3.0

BOOL ChkEven(int iNo)
{
  
    if(iNo%2==0)
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
  int iValue=0;
  BOOL bRet=FALSE;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  bRet=ChkEven(iValue);
  
   if(bRet==TRUE)
    {
      printf("\n%d Is Even\n",iValue);
    }
    else
    {
       printf("\n%d Is Odd\n",iValue);
    }
    
    
  return 0;
}