     //To Print Count Of Digits In Between 3&7

/*
   Input:2395
   Output:1
  
   Input:4521
   Output:2

   Input:9922
   Output:0
*/

#include <stdio.h>

//Compiler version gcc  6.3.0

int CountRange(int iNo)
{
   int Rem=0,Cnt=0;
   
   if(iNo<0)
    {
      iNo=-iNo;
    }
  
   for(;iNo>0;iNo=iNo/10)
    {
      Rem=iNo%10;
      
      if(Rem>3&&Rem<7)  
       {
         Cnt++;
       }  
         
    }
       
   return Cnt;
}

int main()
{
  int iValue=0,iRet=0;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  iRet=CountRange(iValue);
  
  
  printf("\nCount Of Digits Which are In Between 3 & 7= %d\n",iRet);
   
  
  return 0;
}
