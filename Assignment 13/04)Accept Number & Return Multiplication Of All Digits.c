    //Display Multiplication Of All Digits

/*
   Input:2395
   Output:270  (5*9*3*2)
  
   Input:-1018
   Output:0    (8*1*0*1)

   Input:922432
   Output:864   (2*3*4*2*2*9)
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int MultDigits(int iNo)
{
   int Rem=0,Mult=1;
   
   if(iNo<0)
    {
      iNo=-iNo;
    }
  
   for(;iNo>0;iNo=iNo/10)
    {
      Rem=iNo%10;
      
      Mult=Mult*Rem;        
    }
       
   return Mult;
}

int main()
{
  int iValue=0,iRet=0;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  iRet=MultDigits(iValue);
  
  
  printf("\nMultiplication Of All Digits= %d\n",iRet);
   
  
  return 0;
}
