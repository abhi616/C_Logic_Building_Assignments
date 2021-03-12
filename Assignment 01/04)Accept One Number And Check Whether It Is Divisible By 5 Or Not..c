#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//Compiler version gcc  6.3.0

int Check(int iNo)
{
    if(iNo%5==0)
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
   
   bRet=Check(iValue);
    
   if(bRet==TRUE)
   {
     printf("\nDivisible By 5\n");
   }
   else
   {
     printf("\nNot Divisible By 5\n");
   }
   
   return 0;
}