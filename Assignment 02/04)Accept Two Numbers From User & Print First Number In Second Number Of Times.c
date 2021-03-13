#include <stdio.h>

//Compiler version gcc  6.3.0

void Display(int iNo,int Frequency)
{
  int i=0;
  
  for(i=0;i<Frequency;i++)
   {
     printf("%d ",iNo);
   }
   
   return; 
}

int main()
{
  int iValue=0,iCnt=0;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  printf("\nEnter Frequency: ");
  scanf("%d",&iCnt);
  
  
  Display(iValue,iCnt);
  
  return 0;
}