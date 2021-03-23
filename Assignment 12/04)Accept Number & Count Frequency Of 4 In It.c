#include <stdio.h>


//Compiler version gcc  6.3.0

int CountFour(int iNo)
{
   int Rem=0,Cnt=0;
   
   if(iNo<0)
    {
      iNo=-iNo;
    }
  
   for(;iNo>0;iNo=iNo/10)
    {
      Rem=iNo%10;
      
      if(Rem==4)  
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
  
  iRet=CountFour(iValue);
  
  
  printf("\nCount Of 4 = %d\n",iRet);
   
  
  return 0;
}