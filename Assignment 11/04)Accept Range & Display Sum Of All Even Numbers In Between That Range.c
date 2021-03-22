/*
    Input:23 35
    Output:24 26 28 30 32 34
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int RangeSumEven(int iStart,int iEnd)
{
   int Sum=0;
   
   if(iStart>iEnd||iStart<0||iEnd<0)
   {
     printf("\nInvalid Range...!\n");
   }
   
   for(;iStart<=iEnd;iStart++)
   {
         
       if(iStart%2==0)
        {
          Sum=iStart+Sum;
        }             
     
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
  
  iRet=RangeSumEven(iValue1,iValue2);
  
  printf("\nAddition is %d\n",iRet);
  
  return 0;
}