#include <stdio.h>


//Compiler version gcc  6.3.0

int EvenCount(int iNo)
{
   int Rem=0,ECnt=0;
   
   if(iNo<0)
    {
      iNo=-iNo;
    }
  
   for(;iNo>0;iNo=iNo/10)
    {
      Rem=iNo%10;
      
      if(Rem%2==0)  
       {
         ECnt++;
       }  
         
    }
       
   return ECnt;
}

int main()
{
  int iValue=0,iRet=0;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  iRet=EvenCount(iValue);
  
  
  printf("\nCount Of Even Digits = %d\n",iRet);
   
  
  return 0;
}