#include <stdio.h>

//Compiler version gcc  6.3.0

void Display(int iNo)
{
  
    while(iNo>0)
     {
       printf(" * ");
       iNo--;
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