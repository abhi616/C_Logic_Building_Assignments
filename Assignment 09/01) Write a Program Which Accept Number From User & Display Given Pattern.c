/*
  Input:6
  Output: * * * * * * # # # # # #

  Input:-3
  Output: * * * # # #
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void Display(int iNo)
{
  int i=0;
      
     //To Handle Negative Input
      if(iNo<0)
      {
        iNo=-iNo;
      }
      
      for(i=0;i<iNo;i++)
      {
        printf("* ");
      }
      
      for(i=0;i<iNo;i++)
      {
        printf("# ");
      }
            
        
  return ;
}

int main()
{
   int iValue=0;
   
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  Display(iValue);
  
  
  
  return 0;
}
