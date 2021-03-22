/*
    Input:23 35
    Output:24 26 28 30 32 34

    Input:78 67
    Output: Invalid Range
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void RangeDisplayEven(int iStart,int iEnd)
{
  
   if(iStart>iEnd)
   {
     printf("\nInvalid Range...!\n");
   }
   
   for(;iStart<=iEnd;iStart++)
   {
     
     if(iStart%2==0)
      {
        printf("%d ",iStart);
      }
     
   }
 
  return;
}

int main()
{
  int iValue1=0,iValue2=0;
  
  printf("Enter Starting Point: ");
  scanf("%d",&iValue1);
  
  printf("\nEnter Ending Point: ");
  scanf("%d",&iValue2);
  
  RangeDisplayEven(iValue1,iValue2);
  
  return 0;
}
