/*
    Input:23 30
    Output:212
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int RangeSum(int iStart,int iEnd)
{
   int Sum=0;
   
   if(iStart>iEnd||iStart<0||iEnd<0)
   {
     printf("\nInvalid Range...!\n");
   }
   
   for(;iStart<=iEnd;iStart++)
   {                
       Sum=iStart+Sum;                      
   }
 
  return Sum;
}

int main()
{
  int iValue1=0,iValue2=0,iRet=0;
  
  printf("Enter Starting Point: ");
  scanf("%d",&iValue1);
  
  printf("\nEnter Ending Point: ");
  scanf("%d",&iValue2);
  
  iRet=RangeSum(iValue1,iValue2);
  
  printf("\nAddition is %d\n",iRet);
  
  return 0;
}