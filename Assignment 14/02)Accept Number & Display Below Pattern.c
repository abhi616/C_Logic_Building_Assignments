/*
  Input : 5 
  Output : 5 # 4 # 3 # 2 # 1 #
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iNo)
{
   
   for(;iNo>0;iNo--)
    {
      printf("%d # ",iNo);
    }
  
   return;
}

int main()
{
  int iValue=0;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  Pattern(iValue);
  
  return 0;
}