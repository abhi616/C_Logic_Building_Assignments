#include <stdio.h>


//Compiler version gcc  6.3.0

int CountDiff(int iNo)
{
   int Rem=0,ESum=0,OSum=0;
   
   if(iNo<0)
    {
      iNo=-iNo;
    }
  
   for(;iNo>0;iNo=iNo/10)
    {
      Rem=iNo%10;
      
      if(Rem%2==0)   
      {
        ESum=ESum+Rem;
      }
     else
      {
        OSum=OSum+Rem;
      }  
       
    }
       
   return ESum-OSum;
}

int main()
{
  int iValue=0,iRet=0;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  iRet=CountDiff(iValue);
  
  
  printf("\nDifference Between Summation Of Evem & Odd Digits= %d\n",iRet);
   
  
  return 0;
}