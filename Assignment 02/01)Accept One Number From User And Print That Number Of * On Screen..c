#include <stdio.h>

//Compiler version gcc  6.3.0

void Display(int iNo)
{
  int iCnt=0;
  
    while(iCnt<iNo)
     {
       printf(" * ");
       iCnt++;
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