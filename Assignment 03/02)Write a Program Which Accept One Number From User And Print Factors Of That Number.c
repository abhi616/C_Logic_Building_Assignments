#include <stdio.h>

//Compiler version gcc  6.3.0

void Display_Factors(int iNo)
{
   int i=0;
   
  if(iNo<=0)
   {
     iNo=-iNo;
   }
   
  printf("\nFactors Of %d: ",iNo);
  
  for(i=1;i<=iNo/2;i++)
   {
     
     if(iNo%i==0)
      {
        printf("%d ",i);
      }
   }
   
  return;
}

int main()
{
   int iValue=0;
   
   printf("Enter Number: ");
   scanf("%d",&iValue);
   
   Display_Factors(iValue);
   
  return 0;
}