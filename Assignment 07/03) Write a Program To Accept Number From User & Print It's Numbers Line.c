#include <stdio.h>

//Compiler version gcc  6.3.0

void Display(int iNo)
{
  int i=0;
        
      for(i=0-iNo;i<=iNo;i++)
       {
          printf("%d ",i);
       }   
  
  return;
}

int main()
{
   int iValue=0;
   
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  Display(iValue);
  
  return 0;
}