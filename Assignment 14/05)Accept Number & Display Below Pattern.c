/*
  Input : 8
  Output :2 4 6 8 10 12 14 16
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iNo)
{
   int i=1;
   
   for(i=1;i<=iNo*2;i++)
    {
      if(i%2==0)
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
  
  Pattern(iValue);
  
  return 0;
}