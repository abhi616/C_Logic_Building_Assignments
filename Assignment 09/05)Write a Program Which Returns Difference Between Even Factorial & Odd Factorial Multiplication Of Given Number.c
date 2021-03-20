/*
   Input:5
   Output:-7  (8-15)

   Input:10
   Output:2895  (3840-945)
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int Factorial_Diff(int iNo)
{
   int E_Fact=1,O_Fact=1;
     
    //To Handle Negative Input
      if(iNo<0)
      {
        iNo=-iNo;
      }
      
      for(;iNo>0;iNo--)
       {
         
         if(iNo%2==0)
          {
            E_Fact=E_Fact*iNo;
          }
         else
          {
            O_Fact=O_Fact*iNo;
          }
          
       }
                       
  return E_Fact-O_Fact;  
}

int main()
{
   int iValue=0,iRet=0;
   
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  iRet=Factorial_Diff(iValue);
  
  printf("\nFactorial Multiplication Difference Is = %d\n",iRet);
  
  return 0;
}
