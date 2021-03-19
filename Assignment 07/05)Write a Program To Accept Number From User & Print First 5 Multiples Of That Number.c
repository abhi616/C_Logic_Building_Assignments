#include <stdio.h>

//Compiler version gcc  6.3.0

void MultipleDisplay(int iNo)
{
  int i=0;
        
      for(i=1;i<=5;i++)
       {                 
          printf("%d ",iNo*i);                   
       }   
  
  return;
}

int main()
{
   int iValue=0;
   
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  MultipleDisplay(iValue);
  
  return 0;
}