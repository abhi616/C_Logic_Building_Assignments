#include <stdio.h>

//Compiler version gcc  6.3.0

void DisplayDigit(int iNo)
{
   int Rem=0;
   if(iNo<0)
    {
      iNo=-iNo;
    }
  
   for(;iNo>0;iNo=iNo/10)
    {
      Rem=iNo%10;
      printf("\n%d",Rem);      
    }
  
}

int main()
{
  int iValue=0;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  DisplayDigit(iValue);
  
  return 0;
}