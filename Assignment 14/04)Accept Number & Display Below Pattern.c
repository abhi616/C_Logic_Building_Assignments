/*
  Input : 4
  Output :# 1 * # 2 * # 3 * # 4 * 
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iNo)
{
   int i=1;
   
   for(i=1;i<=iNo;i++)
    {
      printf("# %d * ",i);
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