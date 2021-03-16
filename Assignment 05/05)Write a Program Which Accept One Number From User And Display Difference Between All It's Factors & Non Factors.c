#include <stdio.h>

//Compiler version gcc  6.3.0

int Fact_Diff(int iNo)
{
   int i=0,NonFSum=0,FSum=0;
   
  if(iNo<=0)
   {
     iNo=-iNo;
   }
   
  
  for(i=1;i<iNo;i++)
   {
     
     if(iNo%i!=0)
      {       
        NonFSum=NonFSum+i; 
        
      }
      else
      {
        FSum=FSum+i;
      }
   }
   
  return(FSum-NonFSum);
}

int main()
{
   int iValue=0,iRet=0;
   
   printf("Enter Number: ");
   scanf("%d",&iValue);
   
   iRet=Fact_Diff(iValue);
     
   printf("\nDifference Of All Factors & Non Factors Of %d = %d\n",iValue,iRet);
 
   return 0;
}