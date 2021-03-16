#include <stdio.h>

//Compiler version gcc  6.3.0

int Sum_Non_Fact(int iNo)
{
   int i=0,NonFSum=0;
   
  if(iNo<=0)
   {
     iNo=-iNo;
   }
   
  
  for(i=1;i<=iNo;i++)
   {
     
     if(iNo%i!=0)
      {       
        NonFSum=NonFSum+i; 
      }
      
   }
   
  return NonFSum;
}

int main()
{
   int iValue=0,iRet=0;
   
   printf("Enter Number: ");
   scanf("%d",&iValue);
   
   iRet=Sum_Non_Fact(iValue);
     
   printf("\nSum Of All Non Factors Of %d = %d\n",iValue,iRet);
 
   return 0;
}