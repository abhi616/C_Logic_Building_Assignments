#include <stdio.h>

//Compiler version gcc  6.3.0

void Display(int iNo)
{
  
    if(iNo<10)
     {
       printf("\n \tHello\n");       
     }
    else
     {
       printf("\n \tDemo\n");
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