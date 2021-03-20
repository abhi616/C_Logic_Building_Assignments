#include <stdio.h>

//Compiler version gcc  6.3.0

int Odd_Factors_Mult(int iNo)
{
   int Fact=1;
     
      if(iNo<0)
      {
        iNo=-iNo;
      }
      
      for(;iNo>0;iNo--)
       {
         if(iNo%2!=0)
          {
            Fact=Fact*iNo;
          }
       }
                       
  return Fact;  
}

int main()
{
   int iValue=0,iRet=0;
   
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  iRet=Odd_Factors_Mult(iValue);
  
  printf("\nOdd Factorials Multiplication Is = %d\n",iRet);
  
  return 0;
}