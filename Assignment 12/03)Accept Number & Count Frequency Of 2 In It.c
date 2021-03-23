/*
   Input:2345
   Output:1

   Input:4609
   Output:0
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int CountTwo(int iNo)
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
      
      if(Rem==2)  
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
  
  iRet=CountTwo(iValue);
  
  
  printf("\nCount Of 2 = %d\n",iRet);
   
  
  return 0;
}
