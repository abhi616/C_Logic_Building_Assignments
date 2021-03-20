/*
   Input:5
   Output:15  (5*3*1)
 
   Input:10
   Output:945  (9*7*5*3*1)
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int Odd_Factors_Mult(int iNo)
{
   int Fact=1;
     
   //To Handle Negative Input
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
