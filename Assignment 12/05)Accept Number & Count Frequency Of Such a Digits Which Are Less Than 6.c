/*
   Input:5784
   Output:2
    
   Input:6799
   Output:0
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int Count(int iNo)
{
   int Rem=0,Cnt=0;
   
   //To Handle Negative Input
   if(iNo<0)
    {
      iNo=-iNo;
    }
  
   for(;iNo>0;iNo=iNo/10)
    {
      Rem=iNo%10;
      
      if(Rem<6)  
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
  
  iRet=Count(iValue);
  
  
  printf("\nCount Of Digits Which Are Less Than 6 = %d\n",iRet);
   
  
  return 0;
}
