#include <stdio.h>

//Compiler version gcc  6.3.0

void Number(int iNo)
{
  int i=0;
      
      if(iNo<0)
      {
        iNo=-iNo;
      }
      
      if(iNo<=50)
       {                 
          printf("\nLess\n");                   
       } 
      else if(iNo>50&&iNo<=100)  
       {
         printf("\nMedium\n");
       }
      else
       {
         printf("\nGreater\n");
       }
  
  return;
}

int main()
{
   int iValue=0;
   
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  Number(iValue);
  
  return 0;
}