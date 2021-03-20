/*
  Input:5
  Output:8  (4*2)

  Input:-5
  Output:8  (4*2)
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int Even_Factorial_Mult(int iNo)
{
   int Fact=1;
     
    //To Handle Negative Input
      if(iNo<0)
      {
        iNo=-iNo;
      }
      
      for(;iNo>0;iNo--)
       {
         if(iNo%2==0)
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
  
  iRet=Even_Factorial_Mult(iValue);
  
  printf("\nEven Factorials Multiplication Is = %d\n",iRet);
  
  return 0;
}
