#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iNo)
{
  int i=0;
   if(iNo>0)
    {
      
      for(i=0;i<iNo;i++)
       {
          printf("$ * ");
       }
    
    }
   
   else
      {
        
        for(i=0;i>iNo;i--)
         {
            printf("$ * ");
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