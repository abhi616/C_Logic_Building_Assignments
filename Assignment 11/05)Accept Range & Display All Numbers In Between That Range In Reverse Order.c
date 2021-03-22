/*
    Input:25 32
    Output:32 31 30 29 28 27 26 25
    
    Input:34 25
    Output: Invalid Range
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void RangeDisplayRev(int iStart,int iEnd)
{
   
   if(iStart>iEnd)
   {
     printf("\nInvalid Range...!\n");
   }
   
   for(;iEnd>=iStart;iEnd--)
   {                
       printf("%d ",iEnd);            
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
  
  RangeDisplayRev(iValue1,iValue2);
  
  
  return 0;
}