#include <stdio.h>

//Compiler version gcc  6.3.0

int Factorial(int iNo)
{
  int Fact=1;
      
      if(iNo<0)
      {
        iNo=-iNo;
      }
      
      for(;iNo>0;iNo--)
      {
        Fact=Fact*iNo;
      }
      
        
  return Fact;
}

int main()
{
   int iValue=0,iAns=0,iTemp=0;
   
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  iTemp=iValue;

  iAns=Factorial(iValue);
  
  printf("\nFactorial Of %d = %d\n",iTemp,iAns);
  
  return 0;
}