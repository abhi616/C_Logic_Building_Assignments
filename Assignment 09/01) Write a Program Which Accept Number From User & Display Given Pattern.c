#include <stdio.h>

//Compiler version gcc  6.3.0

void Display(int iNo)
{
  int i=0;
      
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