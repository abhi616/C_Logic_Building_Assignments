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