/*
   Input:2395
   Output:3
  
   Input:-1018
   Output:2

   Input:8462
   Output:0
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int OddCount(int iNo)
{
   int Rem=0,OCnt=0;
   
   if(iNo<0)
    {
      iNo=-iNo;
    }
  
   for(;iNo>0;iNo=iNo/10)
    {
      Rem=iNo%10;
      
      if(Rem%2!=0)  
       {
         OCnt++;
       }  
         
    }
       
   return OCnt;
}

int main()
{
  int iValue=0,iRet=0;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  iRet=OddCount(iValue);
  
  
  printf("\nCount Of Odd Digits = %d\n",iRet);
   
  
  return 0;
}
