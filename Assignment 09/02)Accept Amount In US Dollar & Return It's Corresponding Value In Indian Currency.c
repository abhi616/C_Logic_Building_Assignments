#include <stdio.h>

//Compiler version gcc  6.3.0

int DollarToINR(int iNo)
{
      
      if(iNo<0)
      {
        iNo=-iNo;
      }
      
                       
  return iNo*70;  // 1$=70Rs.
}

int main()
{
   int iValue=0,iRet=0;
   
  printf("Enter Number Of USD: ");
  scanf("%d",&iValue);
  
  iRet=DollarToINR(iValue);
  
  printf("\nValue In InR = %d\n",iRet);
  
  return 0;
}