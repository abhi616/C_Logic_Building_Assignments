/*
   Input:2509
   Output:It Contains Zero

   Input:5789
   Output:There Is No Zero

   Input:-6590
   Output:It Contains Zero
*/


#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

//Compiler version gcc  6.3.0

BOOL ChkZero(int iNo)
{
   int Rem=0;
   
   //To Handle Negative Input
   if(iNo<0)
    {
      iNo=-iNo;
    }
  
   for(;iNo>0;iNo=iNo/10)
    {
      Rem=iNo%10;
      
      if(Rem==0)  
       {
         return TRUE;
       }  
         
    }
       
   return FALSE;
}

int main()
{
  int iValue=0;
  BOOL bRet=FALSE;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  bRet=ChkZero(iValue);
  
  if(bRet==TRUE)
   {
      printf("\nIt Contains Zero\n");
   }
  else
   {
     printf("\nThere Is No Zero\n");
   }
  
  return 0;
}
