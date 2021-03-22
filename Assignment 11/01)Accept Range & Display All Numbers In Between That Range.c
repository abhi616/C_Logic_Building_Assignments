/*
    Input:23 35
    Output:23 24 25 26 27 28 29 30 31 32 33 34 35
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void RangeDisplay(int iStart,int iEnd)
{
  
   for(;iStart<=iEnd;iStart++)
   {
     printf("%d ",iStart);
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
  
  RangeDisplay(iValue1,iValue2);
  
  return 0;
}
